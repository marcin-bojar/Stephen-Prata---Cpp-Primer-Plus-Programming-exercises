#include <iostream>

int main ()
{
    using namespace std;

    cout << "Podaj liczbe (0 konczy program): ";
    int liczba;
    int suma = 0;
    cin >> liczba;
    while( liczba != 0)
    {
    suma += liczba;
    cout << "Suma liczb wynosi: " << suma << endl << "Podaj kolejna liczbe: ";
    cin >> liczba;
    }

    cout << endl << "Zakonczyles program!" << endl;
   return 0;
}
