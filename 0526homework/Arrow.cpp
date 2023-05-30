#include "stdafx.h"
#include "Arrow.h"

void Arrow::SetArrows()
{
	for (int i = 0; i < 10; i++)
	{
		arrows[i] = Math::Random(0, 3);
	}
}

void Arrow::CheckArrows(int& index, int& typedKey)
{
	if (arrows[index] == typedKey)
		index++;
	else
		index = 0;
}

void Arrow::PrintArrows(int& index)
{
	for (int i = 0; i < 10; i++)
	{
		if (i < index)
			std::cout << "��";
		else
		{
			switch (arrows[i])
			{
			case 0:
				std::cout << "��";
				break;
			case 1:
				std::cout << "��";
				break;
			case 2:
				std::cout << "��";
				break;
			case 3:
				std::cout << "��";
				break;
			}
		}
	}
	std::cout << std::endl;
}
