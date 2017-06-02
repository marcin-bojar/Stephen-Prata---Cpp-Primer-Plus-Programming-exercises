#include <iostream>
#include <cstring>
#include "Golf.h"
#include <string>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    int size;
    int gracze = 0;

    cout << "Podaj ilosc graczy, ktorych chcesz wpisac: ";
    cin >> size;
    cin.get();

    Golf * tablica = new Golf[size];

    for( int i = 0; i < size; i++)
    {
        if( !tablica[i].setgolf() )
            break;
        gracze++;
    }
    cout << "\n>>> Oto lista zawodnikow <<<\n";
    for( int i = 0; i < gracze; i++ )
        tablica[i].show();

    cout << "Wybierz, ktorego gracza handicap chcesz zmienic ( od 1 do " << size << " ): ";
    int wybor;
    cin >> wybor;
    cout << "Jaki jest jego handicap: ";
    int hc;
    cin >> hc;
    cin.get();
    tablica[wybor-1].handi(hc);
    tablica[wybor-1].show();

    delete [] tablica;

    return 0;
}

