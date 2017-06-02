#include "Golf.h"
#include <iostream>
#include <cstring>

Golf::Golf(const char * name, int hc)
{
    strncpy( fullname, name, LIMIT );
    handicap = hc;
}

Golf::Golf()
{
}

int Golf::setgolf()
{
    using std::cin;
    using std::endl;
    using std::cout;
    char name[LIMIT];
    int hc;

    cout << endl << "Podaj imie i nazwisko golfisty: ";
    cin.getline( name, LIMIT );
    if(name[0] == '\0')
    {
        cin.clear();
        return 0;
    }
    cout << "Podaj jego handicap: ";
    while( !(cin >> hc ))
    {
        cout << "Podaj liczbe: ";
        cin.clear();
        while(cin.get() != '\n')
            continue;
    }
    cin.get();
    Golf temp(name, hc);
    *this = temp;
    return 1;
}

void Golf::show() const
{
    std::cout << "Imie i nazwisko golfisty: " << fullname << std::endl;
    std::cout << "Jego handicap to: " << handicap << std::endl;
}

void Golf::handi( int hc )
{
    handicap = hc;
}
