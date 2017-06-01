#include <iostream>

void mpg( double );

int main()
{
    using namespace std;

    cout << "Podaj spalanie w litrach na 100km: ";
    double litry;
    cin >> litry;

    mpg( litry );

    return 0;
}

void mpg( double litry )
{
    double galony = litry / 3.785;
    const double miles_per_100km = 62.14;
    double spalanie = ( miles_per_100km / galony );

    std::cout << "Spalanie w MPG wynosi: " << spalanie;
}
