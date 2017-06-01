#include <iostream>

long double szansa( unsigned liczby, unsigned skreslenia );
long double powerSzansa( unsigned powerLiczba, unsigned powerSkreslenia );

int main()
{
    using namespace std;

    int skreslenia, liczby, powerSkreslenia;
    const int powerLiczba = 1;
    cout << "Podaj liczbe skreslen i ilosc liczb w zbiorze, nastepnie zbior, z ktorego jest losowana MEGA LICZBA: ";

    while( (cin >> skreslenia >> liczby >> powerSkreslenia) && skreslenia < liczby )
    {
       cout << "Szansa na wygranie w glownym losowaniu to jeden do " << szansa( liczby, skreslenia ) << endl;
       cout << "Szansa trafienia wszystkich liczb i MEGA LICZBY to: " << szansa( liczby, skreslenia) * powerSzansa( powerLiczba, powerSkreslenia);
       cout << endl << "Podaj nastepny zbior skreslen i liczb lub wpisz \"q\" aby zakonczyc." << endl;
    }

    cout << "Zamykam program!" << endl;
}

long double szansa (unsigned liczby, unsigned skreslenia)
{
  long double l, s;
  long double wynik = 1;

  for( l = liczby, s = skreslenia; s > 0; l--, s-- )
    wynik = wynik * l / s;

  return wynik;
}

long double powerSzansa( unsigned powerLiczba, unsigned powerSkreslenia )
{
    return powerSkreslenia / powerLiczba;
}
