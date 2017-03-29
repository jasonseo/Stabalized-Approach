#include "Timer.h"

Timer::Timer()
{

}

void Timer::start()
{
	mStart = std::chrono::high_resolution_clock::now();
}

double Timer::getElapsed()
{
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - mStart).count();
	return duration / 1000000000.0;
}