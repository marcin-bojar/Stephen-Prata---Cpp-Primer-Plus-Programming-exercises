#include <iostream>
#include <string>

struct sponsorzy
{
    std::string imie;
    double kwota;
};

int main()
{
   using namespace std;

cout << "Podaj, ilu bylo wplacajacych: ";
int ilu;
cin >> ilu;
cin.get();

sponsorzy * tablica = new sponsorzy[ilu];

for( int i=0; i<ilu; ++i )
{
    cout << "Podaj imie " << i+1 << "-go wplacajacego: ";
    getline(cin, tablica[i].imie);
    cout << "Podaj kwote wplaty: ";
    cin >> tablica[i].kwota;
    cin.get();

}
cout << endl << endl << "NASI WSPANIALI SPONSORZY";
int licznik = 0;
for( int i=0; i<ilu; ++i )
{
    if( tablica[i].kwota >= 10000 )
    {
       cout << endl << endl << tablica[i].imie << endl << tablica[i].kwota;
       licznik++;
    }

}
if( licznik == 0 )
    cout << endl << "brak";

cout << endl << endl << "NASI SPONSORZY";
licznik = 0;
for( int i=0; i<ilu; ++i )
{
    if( tablica[i].kwota < 10000 && tablica[i].kwota > 0 )
    {
       cout << endl << endl << tablica[i].imie << endl << tablica[i].kwota;
       licznik++;
    }

}
if( licznik == 0 )
    cout << endl << "brak";

    return 0;

}

