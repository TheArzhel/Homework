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

	cookiePositionX = x;
	cookiePositionY = y;

	
	pathCookie.PushBack({ -1,-1 }, 70);
	pathCookie.PushBack({ -1,1 }, 70);

}


void Enemy_Cookie::Move()
{
	position.x = cookiePositionX + pathCookie.GetCurrentPosition().x;
	position.y = cookiePositionY + pathCookie.GetCurrentPosition().y;





	
}