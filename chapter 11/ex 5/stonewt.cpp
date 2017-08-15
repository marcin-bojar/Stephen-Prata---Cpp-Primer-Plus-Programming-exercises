#include <iostream>
#include "stonewt.h"

using std::cout;

void StoneWt::set_stn()
{
    stone = (int) pounds / Lbs_per_stn;
    pds_left = (int) pounds % Lbs_per_stn + pounds - (int) pounds;
}

void StoneWt::set_pds()
{
    pounds = stone * Lbs_per_stn + pds_left;
}

StoneWt::StoneWt(double lbs)
{
    mode = StoneWt::FPDS;
    pounds = lbs;
    set_stn();
}

StoneWt::StoneWt(int stn, double lbs)
{
    mode = StoneWt::STN;
    stone = stn;
    pds_left = lbs;
    set_pds();
}

StoneWt::StoneWt()
{
    mode = StoneWt::FPDS;
    stone = pds_left = pounds = 0;
}

StoneWt::~StoneWt()
{
}

StoneWt StoneWt::operator+(const StoneWt & a) const
{
   StoneWt sum(pounds +a.pounds);
   return sum;
}

StoneWt StoneWt::operator-(const StoneWt & a) const
{
    StoneWt diff(pounds - a.pounds);
    return diff;
}

StoneWt StoneWt::operator*(double m) const
{
    StoneWt multi(pounds * m);
    return multi;
}

void StoneWt::stn_mode()
{
    mode = StoneWt::STN;
}

void StoneWt::pds_mode()
{
  mode = StoneWt::PDS;
}

void StoneWt::fpds_mode()
{
    mode = StoneWt::FPDS;
}

StoneWt operator*(double m, const StoneWt & a)
{
    return a * m;
}

std::ostream & operator<<(std::ostream & os, const StoneWt & a)
{
    if(a.mode == StoneWt::STN)
       cout << a.stone << " stones, " << a.pds_left << " pounds.";
    else if( a.mode == StoneWt::PDS)
        cout << (int) a.pounds << " pounds.";
    else
        cout << a.pounds << " pounds.";
}
