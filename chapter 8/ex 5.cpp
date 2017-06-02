#include <iostream>

template <typename T>
T max5( T tablica[] )
{
   T najwieksza;
   int i = 0;
   najwieksza = tablica[i];

   for( i = 1; i < 5; i++ )
   {

       if( najwieksza > tablica[i] )
        continue;
       else
        najwieksza = tablica[i];

   }

   return najwieksza;
}

int main()
{
    using namespace std;

    int tablicaINT[5] = {4, 32, 116, 67, 99};
    double tablicaDOUBLE[5] = {16.3, 67.9, 77, 43.1, 69.0};

    cout << "Znajdzmy najwieksza liczbe z tablicy!" << endl;
    cout << "Zawartosc tablicy liczb calkowitoliczbowych: ";
    for( int i = 0; i < 5; i++ )
        cout << tablicaINT[i] << " ";
    cout << endl << "Najwieksza liczba calkowitoliczbowa to: " << max5(tablicaINT) << endl << endl;
    cout << "Zawartosc tablicy liczb zmiennoprzecinkowych: ";
    for( int i = 0; i < 5; i++ )
        cout << tablicaDOUBLE[i] << " ";
    cout << endl << "Najwieksza liczba zmiennoprzecinkowa to: " << max5(tablicaDOUBLE) << endl << endl;
    cout << "GOTOWE!" << endl;

    return 0;
}
