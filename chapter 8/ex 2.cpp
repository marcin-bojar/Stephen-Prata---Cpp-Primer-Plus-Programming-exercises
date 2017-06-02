#include <iostream>

struct batonik { char producent[80]; double waga; int kalorie; };

void wyswietl( const batonik & nazwa );
void wpisz( batonik & nazwa, char * str = "Millenium Munch", double w = 2.85, int k = 350 );

int main()
{
   using namespace std;

   char nazwa[80];
   double waga;
   int kalorie;
   batonik b1;
   batonik b2;
   batonik b3;

   cout << "Podaj nazwe producenta: ";
   cin.getline( nazwa, 80 );
   cout << "Podaj wage: ";
   cin >> waga;
   cout << "Podaj ilosc kalorii: ";
   cin >> kalorie;

   wpisz( b1, nazwa, waga, kalorie );
   wyswietl( b1 );
   wpisz( b2 );
   wyswietl( b2 );
   wpisz( b3, "Baton Stefcia", 660, 1218 );
   wyswietl( b3 );

   return 0;

}

void wyswietl( const batonik & nazwa )
{
    using namespace std;

    cout << "Nazwa producenta: " << nazwa.producent << endl;
    cout << "Waga batonika: " << nazwa.waga << endl;
    cout << "Ilosc kalorii: " << nazwa.kalorie << endl;
}

void wpisz( batonik & nazwa, char * str, double w, int k )
{
    for( int i = 0; i < 80; i++)
        nazwa.producent[i] = str[i];
    nazwa.waga = w;
    nazwa.kalorie = k;
}
