#include <iostream>
#include <array>

int main()
{
    using namespace std;

    array<double, 10> datki;

    cout << "Podaj maksymalnie 10 wartosci: ";
    int i = 0;
    while( i < 10 && cin >> datki[i] )
    {
       if( ++i < 10 )
       cout << "Kolejna wartosc: " ;
    }

    double suma = 0.0;
    for( int j = 0; j < i; ++j )
        suma += datki[j];
    double srednia = suma / i;
    cout << "Podano " << i << " danych." << endl;
    cout << "Ich srednia wynosi: " << srednia  << endl;
    cout << "Wartosci wieksze od sredniej to: ";

    for( int j = 0; j < i; ++j)
    {
        if( datki[j] > srednia)
            cout << datki[j] << " ";
    }


    return 0;

}
