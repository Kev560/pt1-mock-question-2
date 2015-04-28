#include <iostream>
#include <string>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time(int hour = 0, int mins = 0) //: hours(hour), minutes(mins)
{
	hours = hour;
	minutes = mins;

}

Time :: ~Time()
{
}

void Time::get(int &hours, int &minutes)
{
	hours = Time::hours;
	minutes = Time::minutes;
}

void Time::set(int hours, int minutes)
{
	if (hours >= 0 && hours <=23 && minutes >=0 && minutes <= 59)
		{
			Time::hours = hours;
			Time::minutes = minutes;
		}
}

Time Time::operator++(int)
{
	Time temp(hours, minutes);

	minutes++;
	hours = hours + minutes / 60;
	hours = hours % 24;
	minutes = minutes % 60;

	return temp;
}

ostream& operator<<(ostream& os,Time &k)
{
	os << setfill('0') << setw(2) << k.hours << ":" <<setw(2) << k.minutes <<endl;
	return os;

}