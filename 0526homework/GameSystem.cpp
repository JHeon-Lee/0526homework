#include "stdafx.h"
#include "GameSystem.h"

bool GameSystem::RoundClear(int& index)
{
	if (index == 10)
	{
		index = 0;
		std::cout << "����!" << std::endl;
		Sleep(1000);
		return true;
	}
	else
		return false;
}

bool GameSystem::Gameover(int elapsedTime)
{
	if (elapsedTime > 10)
	{
		std::cout << "����..." << std::endl;
		return false;
	}
	else
		return true;
}
