#include <iostream>

long double oblicz( long long, long long);

int main()
{
    using namespace std;

    cout << "Podaj populacje swiata: ";
    long long swiat;
    cin >> swiat;
    cout << "Podaj populacje Polski: ";
    long long polska;
    cin >> polska;
    cout << "Populacja Polski stanowi " << oblicz( swiat, polska ) << "% populacji swiata.";

    return 0;
}

long double oblicz( long long swiat, long long polska )
{
    return ((double)polska / (double)swiat) * 100;
}
