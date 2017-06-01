#include <iostream>

double convert( double );

int main()
{
    using namespace std;
    cout << "Podaj temperature w stopniach C: ";
    double celsjusz;
    cin >> celsjusz;
    double farh = convert( celsjusz );
    cout << celsjusz << " stopni Celsjusza to " << farh << " stopni Farhenheita." << endl;

    return 0;
}

double convert( double a )
{
    return 1.8 * a + 32.0;
}
