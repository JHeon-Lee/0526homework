#include "stdafx.h"
#include "Timer.h"

void Timer::RemainingTime(int time)
{
    std::cout << "제한 시간 : ";
    for (int i = time; i < 10; i++)
    {
        std::cout << "■";
    }
    std::cout << std::endl;
}

Stopwatch::Stopwatch()
{
}

void Stopwatch::Start()
{
    start_time = std::chrono::high_resolution_clock::now();
}

const float Stopwatch::GetElapsedTimeSec()
{
    std::chrono::duration<double, std::milli> ms = std::chrono::high_resolution_clock::now() - start_time;
    return static_cast<float>(ms.count() / 1000.0);
}

const float Stopwatch::GetElapsedTimeMs()
{
    std::chrono::duration<double, std::milli> ms = std::chrono::high_resolution_clock::now() - start_time;
    return static_cast<float>(ms.count());
}