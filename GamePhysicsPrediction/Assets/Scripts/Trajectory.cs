using System;
using System.Collections.Generic;
using UnityEngine;

public class Impact
{
    public GameObject gameObject;
    public Vector3 impactPoint;
    public Vector3 impactNormal;
    public bool bounce;
    public Vector3 bounceVec;

    public Impact(GameObject gameObject, Vector3 impactPoint, Vector3 impactNormal, bool bounce, Vector3 bounceVec)
    {
        this.gameObject = gameObject;
        this.impactPoint = impactPoint;
        this.impactNormal = impactNormal;
        this.bounce = bounce;
        this.bounceVec = bounceVec;
    }
    public Impact(Vector3 impactPoint)
    {
        this.gameObject = null;
        this.impactPoint = impactPoint;
        this.impactNormal = Vector3.zero;
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
    // NOTE: There is a lot of not implemented exceptions here
    // These are intended to be put in later for the production assignment
    // Therefore, if you're reading this in the future, hello :) this comment is a relic of code history

    // Public-facing variables
    public Vector3 startPoint;
    public Vector3 launchVec;
    public List<Impactable> obstacles;
    public List<Impact> impacts;
    public float impactTime;

    // Constructors
    public Trajectory()
    {
        startPoint = Vector3.zero;
        launchVec = Vector3.zero;
        obstacles = new List<Impactable>();
        impacts = new List<Impact>();
        impactTime = -1f;
    }
    public Trajectory(Vector3 start, Vector3 launch, Vector3 impact, float impactTime)
    {
        startPoint = start;
        launchVec = launch;
        obstacles = new List<Impactable>();
        impacts = new List<Impact>();
        impacts.Add(new Impact(impact));
        this.impactTime = impactTime;
    }
    // Public-facing class functions
    // Calculates trajectory based on start point, launch vector, launch speed, and 
    public void calculate()
    {
        throw new NotImplementedException();
    }

    // Public-facing static functions
    // Calculates firing vector options given exit speed, target point, and (optionally) obstacles to avoid
    public static List<Trajectory> calculateFiringSolutions(Vector3 start, Vector3 target, float exitSpd, List<GameObject> obstacles = null)
    {
        List<Trajectory> results = new List<Trajectory>();

        Vector3 delta = target - start;

        // Calculate the a,b,c coefficients of a conventional quadratic equation
        float a = Physics.gravity.sqrMagnitude;
        float b = -4 * (Vector3.Dot(Physics.gravity, delta) + exitSpd * exitSpd);
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
        {
            Vector3 launch = (2 * delta - Physics.gravity * time0 * time0) / (2 * exitSpd * time0);
            launch = launch.normalized * exitSpd;
            Trajectory traj0 = new Trajectory(start, launch, target, time0);
            results.Add(traj0);
        }
        if (time1 >= 0)
        {
            Vector3 launch = (2 * delta - Physics.gravity * time1 * time1) / (2 * exitSpd * time1);
            launch = launch.normalized * exitSpd;
            Trajectory traj1 = new Trajectory(start, launch, target, time1);
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
    private Impact findFinalImpact(Trajectory trajectory, int maxIterations, int rayCount)
    {
        Impact lastImpact = null;
        Trajectory lastTrajectory = trajectory;
        
        // Loop until a noBounceObstacle is hit
        for (int idx = 0; idx < maxIterations; idx++)
        {
            // Find next intersection
            Impact impact = findFirstIntersection(lastTrajectory, rayCount);
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
    private Impact findFirstIntersection(Trajectory traj, int rayCount)
    {
        throw new NotImplementedException();

        // 
    }
}
