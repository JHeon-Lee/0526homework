#include "stdafx.h"

int main()
{
    Arrow arrow;
    Player player;
    Stopwatch stopwatch;
    bool isContinue = true;
    // Timer, GameSystem class���� �Լ����� �ѹ����� ����� �����̶�
    // ��ü�� ���� ������ �ʰ� �ٷ� �͸�ü�� ���

    while (isContinue)
    {
        stopwatch.Start();
        arrow.SetArrows();
        float remainingTime = 0.0;
        
        while (true)
        {
            system("cls");

            Timer().RemainingTime(remainingTime);
            arrow.PrintArrows(player.arrowsIndex);

            if (GameSystem().Gameover(remainingTime) == false)
            {
                isContinue = false;
                break;
            }

            if (GameSystem().RoundClear(player.arrowsIndex) == true)
                break;

            if (_kbhit())
            {
                player.PlayerArrow();
                arrow.CheckArrows(player.arrowsIndex, player.arrow);

                while (_kbhit()) _getch(); // ���� ����
            }

            Sleep(10);

            remainingTime = stopwatch.GetElapsedTimeSec();
        }
    }

    return 0;
}