#include <iostream>

int wypelnijTablice( double tablica[], int wielkoscMAX );
void wyswietlTablice( const double tablica[], int wielkosc );
void odwrocTablice( double tablica[], int wielkosc );

int main()
{
    int wielkosc;
    const int wielkoscMAX = 10;
    double tablica[wielkoscMAX];


    wielkosc = wypelnijTablice( tablica, wielkoscMAX );
    wyswietlTablice( tablica, wielkosc );
    odwrocTablice( tablica, wielkosc );
    wyswietlTablice(tablica, wielkosc);

    std::cout << "Gotowe! Zamykam program!" << std::endl;

    return 0;
}

int wypelnijTablice( double tablica[], int wielkoscMAX )
{
    using namespace std;
    int i;
    cout << "Podaj maksymalnie 10 ostatnich cen zatankowanego paliwa: ";
    for( i = 0; i < wielkoscMAX; i++ )
    {
        cin >> tablica[i];
        if( !cin )
            return i;
        cout << "Podaj kolejna liczbe: " << endl;
    }

    return i;
}

void wyswietlTablice( const double tablica[], int wielkosc )
{
    for( int i = 0; i < wielkosc; i++ )
        std::cout << i+1 << ". cena: " << tablica[i] << std::endl;
}

void odwrocTablice( double tablica[], int wielkosc )
{
   int i, j;
   for( i=0, j=wielkosc-1; i<=j; i++, j-- )
   {
       double temp;
       temp = tablica[i];
       tablica[i] = tablica[j];
       tablica[j] = temp;
   }
   std::cout << std::endl << "Ceny w odwrotnej kolejnosci: " << std::endl;
}
