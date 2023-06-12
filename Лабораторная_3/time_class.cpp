#include <iostream>
#include <iomanip>
#include <fstream>
#include "time_class.h"


Time::Time() : minutes(0), seconds(0) {}
Time::Time(int m, int s) : minutes(m + s / 60), seconds(s % 60) {}
Time::Time(const Time& t) : minutes(t.minutes), seconds(t.seconds) {}
Time::~Time() {}

Time Time::operator=(const Time& t)
{
    minutes = t.minutes;
    seconds = t.seconds;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Time& t)
{
    return out << std::setfill('0') << std::setw(2) << t.minutes << ":"
        << std::setw(2) << t.seconds << std::setfill(' ');
}

std::istream& operator>>(std::istream& in, Time& t)
{
    int m, s;
    std::cout << "\tMinutes: "; in >> m;
    std::cout << "\tSeconds: "; in >> s;
    t = Time(m, s);
    return in;
}

bool operator==(const Time& time1, const Time& time2)
{
    return (time1.minutes == time2.minutes) && (time1.seconds == time2.seconds);
}

Time operator+(const Time& time1, const Time& time2)
{
    return Time(time1.minutes + time2.minutes, time1.seconds + time2.seconds);
}
