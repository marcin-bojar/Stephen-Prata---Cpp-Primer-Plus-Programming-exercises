#include <iostream>

int main()
{
    using namespace std;

    cout << "Dafne ulokowal 100zl na lokacie z oprocentowaniem 10%." << endl;
    cout << "Natomiast Cleo ulokowal 100zl na lokacie z oprocentowaniem 5%, ale liczonym jako procent skladany." << endl;
    cout << "Kiedy Cleo bedzie mial wiecej pieniedzy niz Dafne? Sprawdzmy!" << endl;
    double Dafne = 100;
    double Cleo = 100;
    int rok = 1;
    do
    {

        Dafne += 100 * 0.10;
        cout << rok << " rok - Dafne ma: " << Dafne << endl;
        Cleo += Cleo * 0.05;
        cout << rok << " rok - Cleo ma: " << Cleo << endl;
        rok++;

    }while( Cleo < Dafne);

    return 0;

}
