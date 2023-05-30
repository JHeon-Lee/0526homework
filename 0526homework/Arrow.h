#pragma once

class Arrow
{
	int arrows[10] = { 0 };
public:
	void SetArrows();
	void CheckArrows(int& index, int& typedKey);
	void PrintArrows(int& index);
};