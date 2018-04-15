
#ifndef __ENEMY_COOKIE_H__
#define __ENEMY_COOKIE_H__

#include "Enemy.h"
#include "path.h"

class Enemy_Cookie : public Enemy
{
private:
	float wave = -1.0f;
	bool going_up = true;
	int original_y = 0;
	Animation fly;
	Path pathCookie;
	
	int cookiePositionY;
	int cookiePositionX;

public:

	Enemy_Cookie(int x, int y);
	void Move();
};

#endif // __ENEMY_COOKIE_H__