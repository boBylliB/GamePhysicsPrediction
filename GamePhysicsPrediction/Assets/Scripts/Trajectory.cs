using System;
using System.Collections.Generic;
using UnityEngine;

public class Impact
{
    public GameObject gameObject;
    public Vector3 impactPoint;
    public Vector3 impactNormal;
    public float timeDiff;
    public bool bounce;
    public Vector3 bounceVec;

    public Impact(GameObject gameObject, Vector3 impactPoint, Vector3 impactNormal, float timeDiff, bool bounce, Vector3 bounceVec)
    {
        this.gameObject = gameObject;
        this.impactPoint = impactPoint;
        this.impactNormal = impactNormal;
        this.timeDiff = timeDiff;
        this.bounce = bounce;
        this.bounceVec = bounceVec;
    }
    public Impact(Vector3 impactPoint, float timeDiff)
    {
        this.gameObject = null;
        this.impactPoint = impactPoint;
        this.impactNormal = Vector3.zero;
        this.timeDiff = timeDiff;
        this.bounce = false;
        this.bounceVec = Vector3.zero;
    }
    public Impact()
    {
        this.gameObject = null;
        this.impactPoint = Vector3.zero;
        this.impactNormal = Vector3.zero;
        this.timeDiff = 0;
        this.bounce = false;
        this.bounceVec = Vector3.zero;
    }
}

public class Impactable
{
    public GameObject gameObject;
    public bool bounceable;

    public Impactable(GameObject gameObject, bool bounceable)
    {
        this.gameObject = gameObject;
        this.bounceable = bounceable;
    }
}

public class Trajectory
{
    // Public-facing variables
    public Vector3 startPoint;
    public Vector3 launchVec;
    public List<Impactable> obstacles;
    public List<Impact> impacts;
    // Any tags to ignore
    public List<string> ignoredTags;

    // Constructors
    public Trajectory()
    {
        startPoint = Vector3.zero;
        launchVec = Vector3.zero;
        obstacles = new List<Impactable>();
        impacts = new List<Impact>();
    }
    public Trajectory(Vector3 start, Vector3 launch, Vector3 impact, float impactTime)
    {
        startPoint = start;
        launchVec = launch;
        obstacles = new List<Impactable>();
        impacts = new List<Impact>();
        impacts.Add(new Impact(impact, impactTime));
    }
    // Public-facing class functions
    // Calculates points along the trajectory given a number of points to generate per trajectory segment
    public List<Vector3> calculatePoints(int pointsPerSegment)
    {
        List<Vector3> points = new List<Vector3>();

        Trajectory traj = this;
        for (int idx = 0; idx < impacts.Count; idx++)
        {
            points.AddRange(calculateSegmentPoints(traj, pointsPerSegment));
            if (idx < impacts.Count - 1)
            {
                traj.launchVec = traj.impacts[0].bounceVec;
                traj.startPoint = traj.impacts[0].impactPoint;
                traj.impacts[0] = traj.impacts[1];
            }
        }

        return points;
    }
    // Displays the trajectory using a given linerenderer and number of line segments to use per trajectory segment
    public void displayTrajectory(LineRenderer lr, int linesPerSegment)
    {
        // Calculate trajectory points
        List<Vector3> points = calculatePoints(linesPerSegment + 1);
        // Set the number of line positions to the number of trajectory points
        lr.positionCount = points.Count;
        // Iterate through all trajectory segments, setting positions to points as we go
        for (int idx = 0; idx < points.Count; idx++)
        {
            lr.SetPosition(idx, points[idx]);
        }
    }

    // Public-facing static functions
    // Calculates firing vector options given exit speed, target point, and (optionally) obstacles to avoid
    public static List<Trajectory> calculateFiringSolutions(Vector3 start, Vector3 target, float exitSpd, List<GameObject> obstacles = null)
    {
        List<Trajectory> results = new List<Trajectory>();

        // Get candidate times
        List<float> impactTimes = calculateImpactTimes(start, target, exitSpd);

        // Return an empty list if no times were found
        if (impactTimes.Count == 0)
            return results;

        Vector3 delta = target - start;

        // Add positive times to results, as negative times aren't possible
        if (impactTimes[0] >= 0)
        {
            Vector3 launch = (2 * delta - Physics.gravity * impactTimes[0] * impactTimes[0]) / (2 * exitSpd * impactTimes[0]);
            launch = launch.normalized * exitSpd;
            Trajectory traj0 = new Trajectory(start, launch, target, impactTimes[0]);
            results.Add(traj0);
        }
        if (impactTimes.Count > 1 && impactTimes[1] >= 0)
        {
            Vector3 launch = (2 * delta - Physics.gravity * impactTimes[1] * impactTimes[1]) / (2 * exitSpd * impactTimes[1]);
            launch = launch.normalized * exitSpd;
            Trajectory traj1 = new Trajectory(start, launch, target, impactTimes[1]);
            results.Add(traj1);
        }

        return results;
    }
    // Calculates firing vector options given exit speed, target point, and obstacles to take into account, including ricochets
    public static List<Trajectory> calculateFiringSolutions(Vector3 start, Vector3 target, float exitSpd, List<GameObject> noBounceObstacles, List<GameObject> bounceObstacles)
    {
        throw new NotImplementedException();
    }


    // Internal helper functions
    private Impact findFinalImpact(Trajectory trajectory, int maxIterations, GameObject ignored, float rayDist)
    {
        Impact lastImpact = null;
        Trajectory lastTrajectory = trajectory;
        
        // Loop until a noBounceObstacle is hit
        for (int idx = 0; idx < maxIterations; idx++)
        {
            // Find next intersection
            Impact impact = findFirstIntersection(lastTrajectory, ignored, rayDist);
            // If no intersection was found, then the previous impact must be the last impact
            if (impact == null)
                return lastImpact;
            // If the impact is not a bounce, then it is the last impact
            if (!impact.bounce)
                return impact;
            // Otherwise, prep for the next loop iteration
            lastImpact = impact;
            lastTrajectory.launchVec = lastImpact.bounceVec;
            lastTrajectory.startPoint = lastImpact.impactPoint;
            lastTrajectory.impacts.Add(lastImpact);
        }
        // If we exit the loop, we hit the iteration limit and should return the last impact found
        return lastImpact;
    }
    private Impact findFirstIntersection(Trajectory traj, GameObject ignored, float rayDist)
    {
        // Since we're trying to find the first intersection, the trajectory given is likely incomplete
        // The only information we require is the launch vector, start position, and objects to take into account

        // Calculate some statistics to know the bounds of our impact checking
        Bounds bounds = new Bounds();
        foreach (Impactable obstacle in traj.obstacles)
        {
            Collider coll = obstacle.gameObject.GetComponent<Collider>();
            bounds.Encapsulate(coll.bounds);
        }

        // To find intersections, we iterate along the trajectory, casting rays forward
        // Once our position is outside of our bounding box, we know we didn't hit anything
        float timeIter = 0f;
        Vector3 iterPos = traj.startPoint;
        Vector3 vel = traj.launchVec;
        while (bounds.Contains(iterPos))
        {
            // Cast a ray in the direction of the current projectile velocity, scaled by the given ray distance
            RaycastHit hitInfo;
            if (Physics.Raycast(iterPos, vel.normalized, out hitInfo, rayDist) && (ignoredTags == null || !ignoredTags.Contains(hitInfo.collider.tag)))
            {
                // If we hit something, grab the impact info and return it
                Impact impact = new Impact();
                // We can grab some info directly
                impact.gameObject = hitInfo.collider.gameObject;
                impact.impactPoint = hitInfo.point;
                impact.impactNormal = hitInfo.normal;
                // Calculate the time to impact, seeing as we now have a start point, end point, and launch vector
                impact.timeDiff = calculateImpactTime(traj.startPoint, impact.impactPoint, traj.launchVec);
                // Search for the object in the obstacle list
                Impactable hitObstacle = obstacles.Find(x => x.gameObject.Equals(impact.gameObject));
                // If the obstacle isn't in the list, we assume we can't bounce off of it
                if (hitObstacle == null || !hitObstacle.bounceable)
                {
                    // If there isn't a bounce, we're done, and can return
                    return impact;
                }
                else
                {
                    // If the obstacle is a bounce, we just need to calculate the bounce vector
                    impact.bounce = true;
                    // Project the object velocity vector onto the impact normal
                    float projSpd = Vector3.Dot(vel, impact.impactNormal);
                    // Apply 2 times the inverse of this projected vector
                    impact.bounceVec = vel - 2 * projSpd * impact.impactNormal;
                    // Now we're done and can return the impact
                    return impact;
                }
            }
            // Increase the time by the current projectile speed divided by the desired ray distance
            // Get the new projectile position and speed from the ballistic trajectory equations
        }

        // If we get here, we found nothing, and return null
        return null;
    }
    private static List<Vector3> calculateSegmentPoints(Trajectory traj, int numPoints)
    {
        // Calculate the timestep between points
        float timeStep = traj.impacts[0].timeDiff / (numPoints - 1);
        // Iterate over the trajectory to generate the points
        List<Vector3> points = new List<Vector3>();
        float timeIter = 0f;
        for (int idx = 0; idx < numPoints; idx++)
        {
            points.Add(traj.startPoint + traj.launchVec * timeIter + 0.5f * Physics.gravity * timeIter * timeIter);
            timeIter += timeStep;
        }

        return points;
    }
    private static float calculateImpactTime(Vector3 startPoint, Vector3 endPoint, Vector3 launchVec)
    {
        // Find candidate times
        List<float> impactTimes = calculateImpactTimes(startPoint, endPoint, launchVec.magnitude);
        // Return negative infinity if no times were found
        if (impactTimes.Count == 0)
            return float.NegativeInfinity;
        // Calculate the time until the x component would reach its final value
        float xTime = launchVec.x / Mathf.Abs(endPoint.x - startPoint.x);
        // Use this xTime to select the correct impact time
        if (impactTimes.Count == 1 || Mathf.Abs(impactTimes[0] - xTime) < Mathf.Abs(impactTimes[1] - xTime))
            return impactTimes[0];
        else
            return impactTimes[1];
    }
    private static List<float> calculateImpactTimes(Vector3 startPoint, Vector3 endPoint, float launchSpeed)
    {
        List<float> results = new List<float>();

        Vector3 delta = endPoint - startPoint;

        // Calculate the a,b,c coefficients of a conventional quadratic equation
        float a = Physics.gravity.sqrMagnitude;
        float b = -4 * (Vector3.Dot(Physics.gravity, delta) + launchSpeed * launchSpeed);
        float c = 4 * delta.sqrMagnitude;

        // Check for a lack of real solutions, and return an empty list if so
        float b2minus4ac = b * b - 4 * a * c;
        if (b2minus4ac < 0)
            return results;

        // Find candidate times
        float time0 = Mathf.Sqrt((-b + Mathf.Sqrt(b2minus4ac)) / (2 * a));
        float time1 = Mathf.Sqrt((-b - Mathf.Sqrt(b2minus4ac)) / (2 * a));

        // Add positive times to results, as negative times aren't possible
        if (time0 >= 0)
            results.Add(time0);
        if (time1 >= 0)
            results.Add(time1);

        return results;
    }
}
