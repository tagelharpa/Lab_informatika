#pragma once
#ifndef TIME_CLASS_H
#define TIME_CLASS_H

#include <iosfwd>

class Time
{
    friend std::ostream& operator<<(std::ostream&, const Time&);
    friend std::istream& operator>>(std::istream&, Time&);

    friend bool operator==(const Time&, const Time&);
    friend Time operator+(const Time&, const Time&);

public:
    Time();
    Time(int, int);
    Time(const Time&);
    Time operator=(const Time&);
    ~Time();

private:
    int minutes, seconds;
};

#endif

