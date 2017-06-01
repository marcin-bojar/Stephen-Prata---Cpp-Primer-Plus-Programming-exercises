#include <iostream>

double sredniaH( double a, double b);

int main()
{
    using namespace std;
    double a, b;

    do
    {
        cout << "Podaj pierwsza liczbe: ";
        while( !(cin >> a))
        {
            cin.clear();
            cin.get();
            cout << "Podaj poprawna wartosc: ";
        }
        cin.sync();
        if( a == 0 )
        {
            cout << "Podales zero! Zamykam program!" << endl;
            return 0;
        }
        cout << "Podaj druga liczbe: ";
        while( !(cin >> b))
        {
            cin.clear();
            cin.get();
            cout << "Podaj poprawna wartosc: ";
        }
        cin.sync();
        if( b == 0 )
        {
            cout << "Podales zero! Zamykam program!" << endl;
            return 0;
        }
        cout << "Srednia harmoniczna podanych liczb wynosi: " << sredniaH(a, b);
        cout << endl << endl << "Gotowe!" << endl;

    }while( a != 0 && b != 0);



    return 0;


}

double sredniaH( double a, double b)
{
    return (2.0*a*b) / (a+b);
}
