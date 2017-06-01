#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string imie;
    string deser;

    cout << "Podaj swoje imie: ";
    getline( cin, imie );
    cout << "Podaj swoj ulubiony deser: ";
    getline( cin, deser );
    cout << "Mam dla Ciebie " << deser << ", " << imie << endl;

    return 0;
}
