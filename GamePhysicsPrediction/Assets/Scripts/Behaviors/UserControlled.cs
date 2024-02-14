using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserControlled : SteeringBehavior
{
    public Kinematic character;
    public float maxAcceleration = 1f;
    public float frictionPercent = 1f;

    public override SteeringOutput getSteering()
    {
        SteeringOutput output = new SteeringOutput();

        Vector3 requestedMotion = Vector3.zero;

        // Start with applying friction
        requestedMotion = -character.linearVelocity.normalized * frictionPercent;

        //if (Input.GetKey("w")) requestedMotion += character.transform.forward;
        //if (Input.GetKey("a")) requestedMotion -= character.transform.right;
        //if (Input.GetKey("s")) requestedMotion -= character.transform.forward;
        //if (Input.GetKey("d")) requestedMotion += character.transform.right;

        if (Input.GetKey("w")) requestedMotion += new Vector3(0, 0, 1);
        if (Input.GetKey("a")) requestedMotion -= new Vector3(1, 0, 0);
        if (Input.GetKey("s")) requestedMotion -= new Vector3(0, 0, 1);
        if (Input.GetKey("d")) requestedMotion += new Vector3(1, 0, 0);

        output.linear = requestedMotion.normalized * maxAcceleration;

        return output;
    }
}
