#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf( golf & g, const char * name, int hc )
{
    strcpy( g.fullname, name );
    g.handicap = hc;
}

int setgolf( golf & g )
{
    using namespace std;
    cin.sync();
    cout << "Podaj imie i nazwisko gracza: ";
    char name[Len];
    cin.getline( name, Len );
    if( strlen(name) == 0 )
       return 0;
    cin.sync();
    cout << "Podaj handicap: ";
    int hc;
    while( !(cin >> hc) || hc < 0 || hc > 54 )
        {
            cout << "Podaj poprawna wartosc! ";
            cin.clear();
            cin.sync();
        }
        setgolf( g, name, hc );
        return 1;



}

void handicap( golf & g, int hc )
{
    g.handicap = hc;
}

void showgolf( const golf & g )
{
    using namespace std;

    cout << "Imie i nazwisko gracza: " << g.fullname << endl;
    cout << "Jego handicap wynosi: " << g.handicap << endl;
}
