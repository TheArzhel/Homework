#include "Application.h"
#include "Enemy_Cookie.h"
#include "ModuleCollision.h"
#include "Path.h"

Enemy_Cookie::Enemy_Cookie(int x, int y) : Enemy(x, y)
{
	fly.PushBack({ 6,72,21,22 });
	/*fly.PushBack({ 6,72,21,22 });
	fly.PushBack({ 6,72,21,22 });
	fly.PushBack({ 6,72,21,22 });*/
	fly.speed = 0.2f;

	animation = &fly;

	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);

	original_y = y;

	pathCookie.PushBack({ 1,0 }, 10);

}


void Enemy_Cookie::Move() 
{
	position += pathCookie.GetCurrentPosition;

	//position = pathCookie.GetCurrentPosition;
	
	
	/*if (going_up)
	{
		if (wave > 1.0f)
			going_up = false;
		else
			wave += 0.05f;
	}
	else
	{
		if (wave < -1.0f)
			going_up = true;
		else
			wave -= 0.05f;
	}

	position.y = int(float(original_y) + (25.0f * sinf(wave)));
	position.x -= 1;*/
}