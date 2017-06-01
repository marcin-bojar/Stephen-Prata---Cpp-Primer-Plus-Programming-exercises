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
    pizza * pz = new pizza;

    cout << "Podaj srednice pizzy: ";
    cin >> pz->srednica;
    cin.get();
    cout << "Podaj nazwe pizzy: ";
    getline( cin, pz->nazwa );
    cout << "Podaj wage pizzy: ";
    cin >> pz->waga;

    cout << endl <<"Pizza o nazwie " << pz->nazwa << " ma srednice " << pz->srednica;
    cout << "cm i wazy " << pz->waga << " gram." << endl;
    delete pz;
    return 0;
}
