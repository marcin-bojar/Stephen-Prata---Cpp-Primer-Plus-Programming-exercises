#include <iostream>
#include <cstring>

template <typename T>
T maxn( T tablica[], int n )
{
    int i = 0;
    T najwieksza = tablica[i];

    for( i = 1; i < n; i++ )
    {
        if( najwieksza > tablica[i] )
            continue;
        else
        najwieksza = tablica[i];
    }

    return najwieksza;
}

template <> const char * maxn(const char * tablica[], int n )
{
    int i = 0;
    const char * najdluzszy = tablica[i];
    int dlugosc = strlen(najdluzszy);

    for( i = 1; i < n; i++ )
    {
        int dlugoscNastepnego = strlen(tablica[i]);
        if( dlugosc >= dlugoscNastepnego)
            continue;
        else
        {
           najdluzszy = tablica[i];
           dlugosc = dlugoscNastepnego;
        }

    }

    return najdluzszy;;
}

int main()
{
    using namespace std;

   const char * tablicaCHAR[5] =
   {
       "Andreas Milk",
       "Waldemar Sromotny",
       "aaaaaaaaaaaaaaaaaaaaaaaaaaa",
       "bbbbbbbbbbbbbbbbbbbbbbbbbbb",
       "Lujkos"
   };

   int tablicaINT[6] = {3, 7, 10, 111, -5, 2};
   double tablicaDOUBLE[4] = {3.4, 2.2, 79.1, 1978.3};

    cout << "Znajdzmy najwieksza liczbe z tablicy!" << endl;
    cout << "Zawartosc tablicy liczb calkowitoliczbowych: ";
    for( int i = 0; i < 6; i++ )
        cout << tablicaINT[i] << " ";
    cout << endl << "Najwieksza liczba calkowitoliczbowa to: " << maxn(tablicaINT, 6) << endl << endl;
    cout << "Zawartosc tablicy liczb zmiennoprzecinkowych: ";
    for( int i = 0; i < 4; i++ )
        cout << tablicaDOUBLE[i] << " ";
    cout << endl << "Najwieksza liczba zmiennoprzecinkowa to: " << maxn(tablicaDOUBLE, 4) << endl << endl;
    cout << "A teraz najdluzszy lancuch z tablicy lancuchow!" << endl;
    cout << "Kandydatami sa: ";
    for( int i = 0; i < 5; i++ )
        cout << tablicaCHAR[i] << " ";
    cout << endl << "Najdluzszy lancuch to: " << maxn(tablicaCHAR, 5) << endl << endl;

    cout << "GOTOWE!" << endl;

    return 0;
}
