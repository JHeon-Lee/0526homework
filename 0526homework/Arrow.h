#pragma once

class Arrow
{
public:
	void SetArrows();
	void CheckArrows(int& index, int& typedKey);
	void PrintArrows(int& index);
	int arrows[10] = { 0 }; // ��������� private ���·� ����ϴ¹�..?
};