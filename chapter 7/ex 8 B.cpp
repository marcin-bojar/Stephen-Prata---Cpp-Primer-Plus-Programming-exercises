#include <iostream>

const int poryRoku = 4;
const char * nazwyPor[poryRoku] =
{
   "Wiosna",
   "Lato",
   "Jesien",
   "Zima"
};

struct koszty { double wydatki[poryRoku]; };

void wypelnij( koszty * poniesione, int wielkosc );
void wyswietl( koszty poniesione, int wielkosc );

int main()
{
    koszty poniesione;
    wypelnij( &poniesione, poryRoku);
    wyswietl( poniesione, poryRoku);

    return 0;
}


void wypelnij( koszty * poniesione, int wielkosc )
{
    for( int i = 0; i < wielkosc; i++ )
    {
        std::cout << "Podaj wydatki za miesiac " << nazwyPor[i] << ": ";
        std::cin >> poniesione->wydatki[i];
    }
}

void wyswietl( koszty poniesione, int wielkosc )
{
    using namespace std;
    double suma = 0.0;
    cout << endl << "WYDATKI" << endl;
    for( int i = 0; i < wielkosc; i++ )
    {
        cout << nazwyPor[i] << ": " << poniesione.wydatki[i] << " zl" << endl;
        suma += poniesione.wydatki[i];
    }

    cout << "Laczne wydatki roczne wyniosly: " << suma << " zl." << endl;
}
