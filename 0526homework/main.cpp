#include "stdafx.h"

int main()
{
    Arrow arrow;
    Player player;
    Stopwatch stopwatch;
    bool isContinue = true;
    // Timer, GameSystem class들은 함수들을 한번씩만 사용할 예정이라
    // 객체를 따로 만들지 않고 바로 익명객체로 사용

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

                while (_kbhit()) _getch(); // 버퍼 비우기
            }

            Sleep(10);

            remainingTime = stopwatch.GetElapsedTimeSec();
        }
    }

    return 0;
}