#pragma once
class Player
{
public:
	int arrow = 4;
	int arrowsIndex = 0;
	int isKeyDown(int key);
	void PlayerArrow();
};