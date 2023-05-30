#pragma once

class Arrow
{
public:
	void SetArrows();
	void CheckArrows(int& index, int& typedKey);
	void PrintArrows(int& index);
	int arrows[10] = { 0 }; // 멤버변수를 private 상태로 사용하는법..?
};