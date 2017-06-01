#include <iostream>

int wypelnijTablice( int tablica[], int wielkosc );
void wypiszTablice( int tablica[], int wielkosc );
double srednia( int tablica[], double wielkosc );

int main()
{
    using namespace std;
    const int wielkoscMAX = 10;
    int wyniki[wielkoscMAX];

    int iloscWynikow = wypelnijTablice( wyniki, wielkoscMAX );
    wypiszTablice( wyniki, iloscWynikow );
    cout << endl << "Srednia podanych wynikow wynosi: " << srednia( wyniki, iloscWynikow );
    cout << endl << endl << "Gotowe! ";

    return 0;
}

int wypelnijTablice( int tablica[], int wielkosc )
{
    using namespace std;
    int licznik = 0;
    int temp;

    for( int i = 0; i < wielkosc; i++ )
    {
          cout << "Podaj " <<  i+1 << " wynik (cyfra \"0\" konczy wpisywanie): ";
          while( !(cin >> temp ) )
          {
             cin.clear();
             cin.sync();
             cout << "Podaj poprawna wartosc! ";
          }

          if( temp == 0 )
            break;
    tablica[i] = temp;
    licznik++;

    }
    return licznik;
}

void wypiszTablice( int tablica[], int wielkosc )
{
    using std::cout;
    if( wielkosc > 0)
    {
        cout << "Wyniki rozgrywek: ";
    for( int i = 0; i < wielkosc; i++ )
        cout << tablica[i] << ", ";
    }
    else
        cout << "Nie podano zadnych wynikow! " << std::endl;
    }


double srednia( int tablica[], double wielkosc )
{
    if( wielkosc > 0)
    {
       double suma = 0;
    for( int i = 0; i < wielkosc; i++)
        suma += tablica[i];

    double srednia = suma / wielkosc;

    return srednia;
    }
    else
        return 0;


}
