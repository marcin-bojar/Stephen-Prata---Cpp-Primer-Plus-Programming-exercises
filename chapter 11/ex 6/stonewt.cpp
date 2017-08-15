#include <iostream>
#include "stonewt.h"


Stonewt::Stonewt(double lbs)
{
    stone = (int) lbs / Lbs_per_stn;
    pds_left = (int) lbs % Lbs_per_stn + lbs - (int) lbs;
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::show_stn() const
{
    std::cout << stone << " stones, " << pds_left << " pounds.\n";
}

void Stonewt::show_lbs() const
{
    std::cout << pounds << " pounds.\n";
}

bool Stonewt::operator<(const Stonewt & a) const
{
    if(pounds < a.pounds)
        return true;
    else
        return false;
}
bool Stonewt::operator>(const Stonewt & a) const
{
    if(pounds > a.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<=(const Stonewt & a) const
{
    if(pounds < a.pounds || pounds == a.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator>=(const Stonewt & a) const
{
   if(pounds > a.pounds || pounds == a.pounds)
        return true;
   else
        return false;
}

bool Stonewt::operator!=(const Stonewt & a) const
{
    if(pounds != a.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator==(const Stonewt & a) const
{
    if(pounds == a.pounds)
        return true;
    else
        return false;
}
