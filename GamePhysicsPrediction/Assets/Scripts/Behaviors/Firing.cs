using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Firing : BallisticBehavior
{
    public Kinematic character;
    public GameObject target;
    public float firingSpeed = 1f;
    public bool selectSoonest = true;

    public bool debug = false;
    public LineRenderer lr;
    public int linesPerSegment;

    public virtual Vector3 getTargetPosition()
    {
        return target.transform.position;
    }
    public override Trajectory getTrajectory()
    {
        Trajectory output = null;
        float impactTime = 0;

        // Get all possible firing solutions
        List<Trajectory> trajectories = Trajectory.calculateFiringSolutions(character.transform.position, getTargetPosition(), firingSpeed);
        // Select the soonest possible firing solution
        foreach (Trajectory traj in trajectories)
        {
            if ((output == null || ((traj.impacts[0].timeDiff > impactTime && !selectSoonest) || (traj.impacts[0].timeDiff < impactTime && selectSoonest))) && traj.impacts[0].timeDiff >= 0)
            {
                impactTime = traj.impacts[0].timeDiff;
                output = traj;
            }
        }

        // Debug output
        if (debug)
            output.displayTrajectory(lr, linesPerSegment);

        return output;
    }
}
