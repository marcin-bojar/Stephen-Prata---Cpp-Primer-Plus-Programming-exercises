#include <iostream>

int main()
{
    using namespace std;

    cout << "Podaj przebiegiem w km: ";
    double km;
    cin >> km;
    cout << "Podaj ilosc zuzytego paliwa: ";
    double paliwo;
    cin >> paliwo;

    cout << "Twoje auto spalilo " << (paliwo / km) * 100 << " litra na 100 kilometrow.";

    return 0;
}
