#include <iostream>

const int MAX = 5;

double * wypelnijTablice( double * pierwszy, double * ostatni );
void pokazTablice( const double * pierwszy, const double * ostatni );
void przeliczTablice( double zmiana, double * pierwszy, double * ostatni );

int main()
{
    using namespace std;
    double nieruchomosci[MAX];

    double * wielkosc = wypelnijTablice(nieruchomosci, nieruchomosci + MAX);
    pokazTablice(nieruchomosci, wielkosc );
    if(wielkosc > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double zmiana;
        while( !(cin >> zmiana) )
        {
            cin.clear();
            cin.sync();
            cout << "Niepoprawna wartosc, podaj liczbe: ";
        }
        przeliczTablice( zmiana, nieruchomosci, wielkosc );
        pokazTablice( nieruchomosci, wielkosc );
    }

    cout << "Gotowe!" << endl;
    cin.get();
    cin.get();

    return 0;
}

double * wypelnijTablice( double * pierwszy, double * ostatni )
{
    using namespace std;
    double temp;
    int i = 0;
    double * pt;
    for( pt = pierwszy; pt != ostatni; pt++, i++)
    {
        cout << "Podaj wartosc nr " << i+1 << ": ";
        cin >> temp;
        if( !cin )
        {
            cin.clear();
            cin.sync();
            cout << "Bledne dane, przerywam wprowadzanie!" << endl;
            break;
        }
        else if( temp < 0)
            break;
        *pt = temp;
    }

    return pt;
}

void pokazTablice( const double * pierwszy, const double * ostatni )
{
 const double * pt;
 int i = 0;

 for( pt = pierwszy; pt != ostatni; pt++, i++ )
        std::cout << "Nieruchomosc " << i+1 << ": " << *pt << std::endl;
}

void przeliczTablice(double zmiana, double * pierwszy, double * ostatni )
{
    double * pt;

    for( pt = pierwszy; pt != ostatni; pt++ )
        *pt *= zmiana;
}
