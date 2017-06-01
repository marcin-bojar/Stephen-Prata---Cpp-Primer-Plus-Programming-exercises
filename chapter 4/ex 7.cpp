#include <iostream>
#include <string>

struct pizza
{
    std::string nazwa;
    int srednica;
    int waga;
};

int main()
{
    using namespace std;
    pizza diabolo;

    cout << "Podaj nazwe pizzy: ";
    getline( cin, diabolo.nazwa );
    cout << "Podaj srednice pizzy: ";
    cin >> diabolo.srednica;
    cout << "Podaj wage pizzy: ";
    cin >> diabolo.waga;

    cout << endl <<"Pizza o nazwie " << diabolo.nazwa << " ma srednice " << diabolo.srednica;
    cout << "cm i wazy " << diabolo.waga << " gram." << endl;

    return 0;
}
