#include <iostream>

int convert( int );

int main()
{
    using namespace std;
    cout << "Podaj swoj wiek: ";
    int wiek;
    cin >> wiek;
    int miesiace = convert( wiek );
    cout << "Twoj wiek w miesiacach wynosi " << miesiace << "." << endl;

    return 0;
}

int convert( int a )
{
    return a * 12;
}
