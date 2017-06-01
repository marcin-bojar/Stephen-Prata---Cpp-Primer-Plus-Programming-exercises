#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

struct wplacajacy
{
    std::string imie;
    double kwota;
};

int main()
{
    using namespace std;

    ifstream plik;
    int liczbaWplacajacych;
    char znak;

    plik.open( "zad 9.txt" );
    if( !plik.is_open() )
    {
       cout << "Nie wczytano pliku!";
        exit(EXIT_FAILURE);
    }

    plik >> liczbaWplacajacych;
    plik.get();
    if( plik.fail())
    {
       cout << endl << "Nieprawidlowe dane! Nie wczytano liczby darczyncow!";
       exit(EXIT_FAILURE);
    }

    cout << "Bylo " << liczbaWplacajacych << " darczyncow." << endl;

    wplacajacy * tablica = new wplacajacy[liczbaWplacajacych];

    for( int i=0; i<liczbaWplacajacych; i++)
    {
        getline(plik, tablica[i].imie );
        plik >> tablica[i].kwota;
        plik.get();
    }

     cout << endl << "NASI WSPANIALI SPONSORZY" << endl;
     int licznik = 0;
     for( int i = 0; i<liczbaWplacajacych; ++i )
     {
       if( tablica[i].kwota >= 10000 )
       {
           cout << tablica[i].imie << endl << tablica[i].kwota << endl;
            licznik++;
       }

     }
    if( licznik == 0)
        cout << endl << "brak" << endl;


    cout << endl << "NASI SPONSORZY" << endl;
    licznik = 0;
    for( int i = 0; i<liczbaWplacajacych; ++i )
     {
       if( tablica[i].kwota < 10000 )
       {
           cout << tablica[i].imie << endl << tablica[i].kwota << endl;
            licznik++;
       }

     }
     if( licznik == 0)
        cout << endl << "brak" << endl;


     delete [] tablica;
     plik.close();

    return 0;

}


