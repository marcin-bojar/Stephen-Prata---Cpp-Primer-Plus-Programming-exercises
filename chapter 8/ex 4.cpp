#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void ustaw( stringy & s1, const char tab[] );
void show( const stringy & s1, int a = 1 );
void show( const char * t1, int a = 1 );

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    ustaw( beany, testing );
    show( beany );
    show( beany, 2 );
    testing[0] = 'D';
    testing[1] = 'u';
    show( testing );
    show( testing, 3);
    show("Gotowe");

    return 0;
}

void ustaw( stringy & s1, const char tab[] )
{
    char * wskaznik = new char[strlen(tab)];
    s1.str = wskaznik;
    strcpy( wskaznik, tab );
    s1.ct = strlen(tab);

}

void show( const stringy & s1, int a )
{
    for( int i = 0; i < a; i++ )
        std::cout << s1.str << endl;

}

void show( const char * t1, int a )
{
    for( int i = 0; i < a; i++ )
        std::cout << t1 << endl;
}
