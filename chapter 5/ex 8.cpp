#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char slowo[80];
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")";
    int licznik = 0;
    cin >> slowo;
    while( strcmp( slowo, "gotowe") )
    {

       ++licznik;
       cin >> slowo;
    }

    cout << "Podano " << licznik << " slow." << endl;

    return 0;
}
