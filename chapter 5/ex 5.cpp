#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 12;

    const char * miesiace[ArSize] =
    {
        "styczen",
        "luty",
        "marzec",
        "kwiecien",
        "maj",
        "czerwiec",
        "lipiec",
        "sierpien",
        "wrzesien",
        "pazdziernik",
        "listopad",
        "grudzien"
    };

    int sprzedaz[ArSize];

    for( int i=0; i<ArSize; ++i )
    {
        cout << "Podaj sprzedaz za " << miesiace[i] << ": ";
        cin >> sprzedaz[i];
    }

    int suma = 0;
    for( int i=0; i<ArSize; ++i )
        suma += sprzedaz[i];
    cout << endl << "Laczna sprzedaz ksiazek w roku wynosi: " << suma << endl;

    return 0;


}

