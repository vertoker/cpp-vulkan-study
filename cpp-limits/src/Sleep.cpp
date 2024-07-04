#include <chrono>
#include <thread>
#include "Sleep.h"

void Sleep(int ms)
{
	std::chrono::milliseconds timespan(ms);
	std::this_thread::sleep_for(timespan);
}
