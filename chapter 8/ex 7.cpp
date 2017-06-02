#include <iostream>

template <typename T>
T SumArray( T tablica[], int n )
{
    std::cout << "Szablon A" << std::endl;

    T total = 0;
    for( int i = 0; i < n; i++ )
        total += tablica[i];

    return total;

}
template < typename T>
T SumArray( T * tablica[], int n )
{
    std::cout << "Szablon B" << std::endl;

    T total = 0;
    for( int i = 0; i < n; i++ )
        total += *tablica[i];

    return total;

}

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;

    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.11},
        {"Ura Foxe", 1300.70},
        {"Iby Stout", 1800.40}

    };

    double * wskaznik[3];

    for( int i = 0; i < 3; i++ )
        wskaznik[i] = &mr_E[i].amount;

    cout << "Suma rzeczy Pana E.: " << SumArray(things, 6) << endl;
    cout << "Suma dlugow Pana E.: " << SumArray(wskaznik, 3) << endl;

    return 0;
}
