#include "Sales.h"

int main()
{
    using namespace SALES;
    double tablica[2] {560, 1124};
    Sales one(tablica, 2);
    Sales two;
    two.setSales();
    one.showSales();
    two.showSales();

    return 0;
}
