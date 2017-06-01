#include <iostream>

int convert( int );

int convert( int a )
{
    return a * 1852;
}

int main()
{
    using namespace std;
    cout << "Podaj odleglosc w milach: ";
    int mile;
    cin >> mile;
    int metry = convert( mile );
    cout << "Podana odleglosc w milach wynosi " << metry << " metrow." << endl;

    return 0;
}
