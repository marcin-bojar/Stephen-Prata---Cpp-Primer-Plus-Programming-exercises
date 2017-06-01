#include <iostream>

void czas( int, int );

int main()
{
    using namespace std;

    cout << "Podaj liczbe godzin: ";
    int godziny;
    cin >> godziny;
    cout << "Podaj liczbe minut: ";
    int minuty;
    cin >> minuty;

    czas( godziny, minuty );

    return 0;
}

void czas( int a, int b )
{
    std::cout << "Czas: " << a << ":" << b << std::endl;
}
