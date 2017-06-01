#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string imie;
    string nazwisko;

    cout << "Podaj imie: ";
    getline( cin, imie );
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    string polaczone = nazwisko + ", " + imie;

    cout << "Oto informacje zestawione w jeden napis: " << polaczone << endl;

    return 0;

}
