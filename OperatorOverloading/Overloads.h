#pragma once

#include <iostream>

using namespace std;

class Clock
{
public:
	Clock();
	void SetClock(int hr, int min, int sec);
	Clock GetClock();
	void operator=(const Clock& otherClock);
	friend ostream& operator<<(ostream& out, const Clock& myClock); // not a member of the class

private:
	int hr;
	int min;
	int sec;
};

Clock::Clock()
{
	hr = 0;
	min = 0;
	sec = 0;
}

void Clock::SetClock(int hr = 0, int min = 0, int sec = 0)
{
	this->hr = hr;
	this->min = min;
	this->sec = sec;
}

Clock Clock::GetClock()
{
	return *this; // contents of clock
}

void Clock::operator=(const Clock& otherClock /* right hand variable */)
{
	hr = otherClock.hr;
	min = otherClock.min;
	sec = otherClock.sec;
}

ostream& operator<<(ostream& out, const Clock& myClock) // since it is not a member of the class, this needs to take in 2 parameters
{
	out << "Clock output: " << myClock.hr << " " << myClock.min << " " << myClock.sec;

	return out;
}
