#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char imie [20];
    char nazwisko[30];

    cout << "Podaj imie: ";
    cin.getline( imie, 20 );
    cout << "Podaj naziwsko: ";
    cin.getline( nazwisko, 30 );

    char polaczenie[50];
    strcpy( polaczenie, nazwisko );
    strcat( polaczenie, ", " );
    strcat( polaczenie, imie );

    cout << "Oto informacje zestawione w jeden napis: " << polaczenie << endl;

    return 0;

}

