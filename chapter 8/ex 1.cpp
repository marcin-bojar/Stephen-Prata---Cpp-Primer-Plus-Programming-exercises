#include <iostream>

void wyswietl( const char * str );
void wyswietl( const char * str, int a );
int uruchomien = 0;

int main()
{
   const char * zdanie = "Lubie robaki.";

wyswietl( zdanie );
wyswietl( zdanie );
wyswietl( zdanie );
wyswietl( zdanie, 3 );
wyswietl( zdanie );
wyswietl( zdanie, 0 );
wyswietl( zdanie, 3 );

return 0;
}

void wyswietl( const char * str )
{
    ++uruchomien;

      std::cout << "Mam jeden argument, wiec wyswietlam raz. ";
      std::cout << str << std::endl;


}

void wyswietl( const char * str, int a )
{
    ++uruchomien;

    if( a != 0 )
    {
        std::cout << "Argument drugi nie jest zerem!" << std::endl << "Wyswietlam tyle razy, ile bylo uruchomien funkcji!" << std::endl;
        for( int i = 0; i < uruchomien; ++i )
            std::cout << str << std::endl;
    }
    else
    {
        std::cout << "Drugi argument jest zerem, wiec wyswietlam raz. ";
        std::cout << str << std::endl;
    }
}
