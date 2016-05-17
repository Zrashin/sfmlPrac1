#include "StdAfx.h"
#include "GameBall.h"


GameBall::GameBall()
{
	Load("images/ball.png");
	assert(IsLoaded());

	GetSprite().setOrigin(15, 15);
}


GameBall::~GameBall()
{
}