#include <iostream>

int main()
{
    using namespace std;

    cout << "Jak masz na imie: ";
    char imie[50];
    cin.getline( imie, 50 );
    cout << "Podaj swoje nazwisko: ";
    char nazwisko[50];
    cin >> nazwisko;
    cout << "Na jaka ocene zaslugujesz: ";
    int ocena;
    cin >> ocena;
    cout << "Ile masz lat: ";
    int wiek;
    cin >> wiek;

    cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Wiek: " << wiek << endl;

    return 0;
}
