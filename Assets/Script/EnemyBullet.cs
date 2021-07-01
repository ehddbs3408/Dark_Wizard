using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBullet : Bullet
{
    void Update()
    {

        transform.Translate(Vector2.up * speed * Time.deltaTime);
        CheckLimit();
    }

    protected override void CheckLimit()
    {
        base.CheckLimit();
    }
    protected override void Despawn()
    {
        base.Despawn();
    }

}
