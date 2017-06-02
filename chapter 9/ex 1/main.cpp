#include <iostream>
#include "golf.h"

int main()
{
    golf tablica[tab];
    int wpisane = 0;

    for( int i = 0; i < tab; i++ )
    {
       if( !setgolf(tablica[i]))
          break;
          wpisane++;
    }


    handicap( tablica[3], 55);

    for( int i = 0; i < wpisane; i++ )
        showgolf(tablica[i]);

        return 0;

}
