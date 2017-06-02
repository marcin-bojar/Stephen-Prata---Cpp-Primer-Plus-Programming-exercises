#include <iostream>

double calculate( double a, double b, double (*pf)(double, double) );
double dodaj( double, double );
double odejmij( double, double );
double pomnoz( double, double );

int main()
{
    using namespace std;
    const int wielkosc = 3;

    double a, b;
    double (*tabFunkcji[wielkosc])(double, double) = { dodaj, odejmij, pomnoz };
    const string tablicaNazw[wielkosc] = {"Dodawanie", "Odejmowanie", "Mnozenie" };

    cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
    while( cin >> a >> b )
    {
        for( int i = 0; i < wielkosc; i++ )
            cout << "Wynik funkcji " << tablicaNazw[i] << " na podanych liczbach wynosi: " << calculate( a, b, (*tabFunkcji[i]) ) << endl;
    }


    cout << endl << "Gotowe!" << endl;

    return 0;

}

double calculate( double a, double b, double (*pf)(double, double) )
{
    return (*pf)(a, b);
}

double dodaj( double a, double b )
{
    return a + b;
}

double odejmij( double a , double b )
{
    return a - b;
}

double pomnoz( double a, double b )
{
    return a * b;
}
