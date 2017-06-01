#include <iostream>

int convert( double );

int main()
{
   using namespace std;

   cout << "Podaj liczbe lat swietlnych: ";
   double lata;
   cin >> lata;
   int jednostki = convert( lata );
   cout << lata << " lat swietlnych = " << jednostki << " jednostek astronomicznych" << endl;

   return 0;
}

int convert( double a)
{
    return a * 63240;
}
