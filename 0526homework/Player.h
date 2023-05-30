#pragma once
class Player
{
public:
	int arrow = 4;
	int arrowsIndex = 0; // 멤버변수를 private 상태로 사용하는법..?
	int isKeyDown(int key);
	void PlayerArrow();
};