#include "stdafx.h"
#include "Player.h"

int Player::isKeyDown(int key)
{
	return ((GetAsyncKeyState(key) & 0x8000) != 0);
}

void Player::PlayerArrow()
{
	if (Player::isKeyDown(VK_LEFT))
		arrow = 0;
	if (Player::isKeyDown(VK_RIGHT))
		arrow = 1;
	if (Player::isKeyDown(VK_UP))
		arrow = 2;
	if (Player::isKeyDown(VK_DOWN))
		arrow = 3;
}
