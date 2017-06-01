#include <iostream>

long double silnia( int liczba );

int main()
{
    using namespace std;

    int liczba;
    cout << "Podaj liczbe: ";

    while( cin >> liczba)
    {
       cout << "Silnia liczby " << liczba << " wynosi: " << silnia( liczba ) << endl;
       cout << "Podaj liczbe: ";

    }

    cout << endl << "Zamykam program!" << endl;

    return 0;
}

long double silnia( int liczba )
{
    long double wynik;
    if( liczba == 0)
        return 1;

    wynik = liczba * silnia(liczba-1);

    return wynik;
}

