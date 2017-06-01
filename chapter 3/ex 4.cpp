#include <iostream>

int main()
{
    using namespace std;

    cout << "Podaj liczbe sekund: ";
    long long sekundy;
    cin >> sekundy;

    const int sek_w_min = 60;
    const int min_w_h = 60;
    const int h_w_dobie = 24;

    cout << sekundy << " sekund = " << sekundy / sek_w_min / min_w_h / h_w_dobie << " dni, " << (sekundy / sek_w_min / min_w_h ) % h_w_dobie << " godzin, ";
    cout << (sekundy / sek_w_min) % min_w_h << " minut, " << sekundy % sek_w_min << " sekund." << endl;

    return 0;
}
