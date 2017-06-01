#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<double, 3> czasy;
    cout << "Podaj czasy sprintu." << endl << "Czas pierwszy: ";
    cin >> czasy[0];
    cout << "Czas drugi: ";
    cin >> czasy[1];
    cout << "Czas trzeci: ";
    cin >> czasy[2];

    cout << "Oto podane czasy: " << czasy[0] << ", " << czasy[1] << ", " << czasy[2] << endl;
    cout << "Srednia tych czasow wynosi: " << (czasy[0] + czasy[1] + czasy[2]) / 3 << endl;

    return 0;

}
