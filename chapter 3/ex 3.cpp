#include <iostream>

int main()
{
    using namespace std;

    cout << "Podaj stopnie: ";
    long double stopnie;
    cin >> stopnie;
    cout << "Podaj minuty: ";
    long double minuty;
    cin >> minuty;
    cout << "Podaj sekudny: ";
    long double sekundy;
    cin >> sekundy;

    const int sekundWminutach = 60;
    const int minutWstopniach = 60;
    cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = ";
    cout << stopnie + (minuty / minutWstopniach) + (sekundy / sekundWminutach / minutWstopniach ) << " stopni." << endl;

    return 0;

}
