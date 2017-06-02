#include <iostream>

const int poryRoku = 4;
const char * nazwyPor[poryRoku] =
{
   "Wiosna",
   "Lato",
   "Jesien",
   "Zima"
};

void wypelnij( double wydatki[], int wielkosc );
void wyswietl( double wydatki[], int wielkosc );

int main()
{
    double wydatki[poryRoku];
    wypelnij( wydatki, poryRoku);
    wyswietl( wydatki, poryRoku);



    return 0;
}


void wypelnij( double wydatki[], int wielkosc )
{
    for( int i = 0; i < wielkosc; i++ )
    {
        std::cout << "Podaj wydatki za miesiac " << nazwyPor[i] << ": ";
        std::cin >> wydatki[i];
    }
}

void wyswietl( double wydatki[], int wielkosc )
{
    using namespace std;
    double suma = 0.0;
    cout << endl << "WYDATKI" << endl;
    for( int i = 0; i < wielkosc; i++ )
    {
        cout << nazwyPor[i] << ": " << wydatki[i] << " zl" << endl;
        suma += wydatki[i];
    }

    cout << "Laczne wydatki roczne wyniosly: " << suma << " zl." << endl;
}
