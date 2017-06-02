#ifndef SALES_H
#define SALES_H

namespace SALES
{
    const int KWARTALY = 4;

    class Sales
{
    private:
        double sales[KWARTALY];
        double srednia;
        double max;
        double min;
    public:
        Sales();
        Sales( const double ar[], int n = 4 );
        void setSales();
        void showSales() const;

};

}



#endif // SALES_H
