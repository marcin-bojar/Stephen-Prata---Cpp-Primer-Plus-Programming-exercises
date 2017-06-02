#include <iostream>
#include "sales.h"

int main()
{
    using namespace SALES;

    double tablica[KWARTALY] = { 3450.2, 4520.9, 7890.5, 1980};

    Sales inter, statyczna;

    setSales( inter );
    setSales( statyczna, tablica  );
    showSales( inter );
    showSales( statyczna );

    return 0;

}
