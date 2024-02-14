using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : Kinematic
{
    public float maxLifetime = 30f; // Default to 30 seconds

    private float elapsedTime = 0f;

    // Update is called once per frame
    protected override void Update()
    {
        // Set velocity based on gravity
        steeringUpdate.linear = Physics.gravity;
        // Set orientation instantaneously
        transform.eulerAngles = new Vector3(Mathf.Asin(-linearVelocity.normalized.y) * Mathf.Rad2Deg, Mathf.Atan2(linearVelocity.x, linearVelocity.z) * Mathf.Rad2Deg, 0);
        // Check for exceeding lifespan
        elapsedTime += Time.deltaTime;
        if (elapsedTime >= maxLifetime)
        {
            // Theoretical explosion effect goes here
            Destroy(this);
        }
        // Update motion
        base.Update();
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Collided!");
        if (collision.gameObject.name != "Tank")
        {
            // Theoretical explosion effect goes here
            Destroy(this.gameObject);
        }
    }
}
