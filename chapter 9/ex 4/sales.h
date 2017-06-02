#ifndef SALES_H_
#define SALES_H_

namespace SALES
{
    const int KWARTALY = 4;
    struct Sales
    {
        double sales[KWARTALY];
        double srednia;
        double maks;
        double minimum;
    };

    void setSales( Sales & s, const double ar[], int n = 4 );
    void setSales( Sales & s );
    void showSales( const Sales & s );
}


#endif // SALES_H_
