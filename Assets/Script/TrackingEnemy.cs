using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackingEnemy : MonoBehaviour
{
    [SerializeField]
    private Transform targetPosition = null;
    [SerializeField]
    private float speed;
    void Start()
    {
        
    }

    void Update()
    {
        Move();
        

    }
    private void Rotate()
    {
        transform.Rotate(new Vector3(transform.rotation.x, transform.rotation.y, 100 * Time.deltaTime));
    }
    private void Move()
    {
        Rotate();
        transform.position = Vector3.MoveTowards(transform.position, targetPosition.position, speed*Time.deltaTime);
    }
}
