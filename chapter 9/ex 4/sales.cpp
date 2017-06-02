#include <iostream>
#include "sales.h"

namespace SALES
{
    void setSales( Sales & s, const double ar[], int n )
    {
        int i;
        for( i = 0 ; i < n; i++)
            s.sales[i] = ar[i];
        if( n < KWARTALY )
        {
            while( i < KWARTALY )
            {
               s.sales[i] = 0;
               i++;
            }

        }

        double suma = 0;
        double minimum = s.sales[0];
        double maximum = s.sales[0];

        for( int i = 1; i < KWARTALY; i++ )
        {
            if( minimum < s.sales[i] )
                continue;
            else
                minimum = s.sales[i];
        }
        s.minimum = minimum;

        for( int i = 1; i < KWARTALY; i++ )
        {
            if( maximum > s.sales[i] )
                continue;
            else
                maximum = s.sales[i];
        }
        s.maks = maximum;

        for( int i = 0; i < KWARTALY; i++ )
            suma += s.sales[i];
        s.srednia = suma / KWARTALY;

    }

    void setSales( Sales & s )
    {
        using namespace std;

        for( int i = 0; i < KWARTALY; i++ )
        {
            cout << "Podaj wartosc sprzedazy w " << i+1 << " kwartale: ";
            cin >> s.sales[i];
        }

        double suma = 0;
        double minimum = s.sales[0];
        double maximum = s.sales[0];

        for( int i = 1; i < KWARTALY; i++ )
        {
            if( minimum < s.sales[i] )
                continue;
            else
                minimum = s.sales[i];
        }
        s.minimum = minimum;

        for( int i = 1; i < KWARTALY; i++ )
        {
            if( maximum > s.sales[i] )
                continue;
            else
                maximum = s.sales[i];
        }
        s.maks = maximum;

        for( int i = 0; i < KWARTALY; i++ )
            suma += s.sales[i];
        s.srednia = suma / KWARTALY;
    }

    void showSales( const Sales & s )
    {
        using namespace std;

        cout << "================== WARTOSCI SPRZEDAZY W KOLEJNYCH KWARTALACH =================" << endl;
        for( int i = 0; i < KWARTALY; i++ )
            cout << "Sprzedaz w " << i+1 << " kwartale: " << s.sales[i] << endl;
        cout << "Najmniejsza wartosc to: " << s.minimum << endl;
        cout << "Najwieksza wartosc to: " << s.maks << endl;
        cout << "Srednia z tego to roku to: " << s.srednia << endl;
    }
}
