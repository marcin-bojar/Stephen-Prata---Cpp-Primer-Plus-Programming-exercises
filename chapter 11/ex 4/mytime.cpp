#include "mytime.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHour(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time & a, const Time & b)
{
    Time sum;
    sum.minutes = a.minutes + b.minutes;
    sum.hours = a.hours + b.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time operator-(const Time & a, const Time & b)
{
    Time diff;
    Time TempA;
    Time TempB;
    TempA.minutes = a.hours * 60 + a.minutes;
    TempB.minutes = b.hours * 60 + b.minutes;
    diff.minutes = TempA.minutes - TempB.minutes;
    diff.hours = diff.minutes / 60;
    diff.minutes %= 60;
    return diff;
}

Time operator*(double m, const Time & a)
{
    Time multi;
    long totalmins = (a.hours * 60 * m) + (a.minutes * m);
    multi.hours = totalmins / 60;
    multi.minutes = totalmins % 60;
    return multi;
}

Time operator*(const Time & a, double m)
{
   return m * a;
}


std::ostream & operator<<(std::ostream & os, const Time & a)
{
    os << a.hours << " hours, " << a.minutes << " minutes";
    return os;
}
