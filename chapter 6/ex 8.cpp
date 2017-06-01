#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    ifstream plik;
    char znak;
    int licznik = 0;

    plik.open("tekst.txt");
    if( !plik.is_open())
        cout << "Nie wczytano pliku!";

    while( plik.get(znak) )
    {
       cout << znak;
       licznik++;
    }

    if(plik.eof())
        cout << endl << "Wczytano wszystkie dane!";
    else if(plik.fail())
        cout << endl << "Nieprawidlowe dane!";
    else if(plik.bad())
        cout << endl << "Wystapil blad sprzetowy!";
    else
        cout << endl << "Nieznany blad!";

    plik.close();

    cout << endl << "Wczytano " << licznik << " znaki.";

    return 0;

}
