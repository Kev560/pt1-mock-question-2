#include <iostream>
#include <string>
#ifndef TIME_H
#define TIME_H

using namespace std;

class Time
{
private: 
	int minutes;
	int hours;

public:
	Time(int hours, int minutes);
	~Time();
	void get(int &hours, int &minutes);
	void set(int hours, int minutes);
	friend ostream& operator<<(ostream& os, Time &k);
	Time operator++(int);

};


#endif