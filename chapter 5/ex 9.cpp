#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string slowo;
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")";
    int licznik = 0;
    cin >> slowo;
    while( slowo != "gotowe" )
    {

       licznik++;
       cin >> slowo;
    }

    cout << "Podano " << licznik << " slow." << endl;

    return 0;
}
