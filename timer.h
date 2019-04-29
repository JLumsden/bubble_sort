//Timer.h
//Implements functions for tracking execution time

//Richard (Trey) Herschede
//November 17, 2018

#ifndef TIMER_H
#define TIMER_H

//LIBRARIES
#include <chrono>
using namespace std;

//for tracking execution time
chrono::steady_clock::time_point startTime, endTime;
chrono::duration<double> diff;

void start()
{
	startTime = chrono::steady_clock::now();
} //end start()

void stop()
{
	endTime = chrono::steady_clock::now();
} //end stop()

double executionTime()
{
	diff = endTime - startTime;
	return 1000 * diff.count();
} //end executionTime()

#endif //TIMER_H
