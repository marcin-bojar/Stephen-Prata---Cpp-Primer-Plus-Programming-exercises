#include "Sales.h"
#include <iostream>

SALES::Sales::Sales()
{
}

SALES::Sales::Sales(const double ar[], int n )
{
    int i;
    for( i = 0; i < n; i++ )
        sales[i] = ar[i];
    if( n < KWARTALY )
    {
        while( i < KWARTALY )
        {
            sales[i] = 0;
            i++;
        }
    }

    double suma = 0;
    for( int i = 0; i < KWARTALY; i++)
        suma += sales[i];
    srednia = suma / KWARTALY;

    double maks = sales[0];
    for( int i = 1; i < KWARTALY; i++)
    {
        if( sales[i] > maks )
            maks = sales[i];
    }
    max = maks;

    double minimum = sales[0];
    for( int i = 1; i < KWARTALY; i++ )
    {
        if( sales[i] < minimum )
            minimum = sales[i];
    }
    min = minimum;

}

void SALES::Sales::setSales()
{
   using std::cout;
   using std::cin;
   double tablica[KWARTALY];

   for( int i = 0; i < KWARTALY; i++ )
   {
       cout << "Podaj wartosc sprzedazy w " << i+1 << " kwartale: ";
       while( !(cin >> tablica[i]))
       {
            cout << "Podaj poprawna wartosc: ";
            cin.clear();
            while( cin.get() != '\n')
                continue;
       }
   }
   Sales temp( tablica );
   *this = temp;
}

void SALES::Sales::showSales() const
{
    using std::cout;
    using std::endl;

    for( int i = 0; i < KWARTALY; i++ )
        cout << "Sprzedaz w " << i+1 << " kwartale: " << sales[i] << endl;
    cout << "Srednia: " << srednia << endl;
    cout << "Najmniejsza wartosc sprzedazy: " << min << endl;
    cout << "Najwieksza wartosc sprzedazy: " << max << endl;
}
