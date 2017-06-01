#include <iostream>

int main()
{
    using namespace std;

    const int Miesiace = 12;
    const int Lata = 3;

    const char * nazwyM[Miesiace] =
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

    int sprzedaz[Lata][Miesiace];

    for( int rok=0; rok<Lata; ++rok )
    {
        cout << "Sprzedaz za " << rok +1 << " rok." << endl;
        for( int miesiac=0; miesiac<Miesiace; ++miesiac )
        {
            cout << "\t Sprzedaz za " << nazwyM[miesiac] << ": ";
            cin >> sprzedaz[rok][miesiac];
        }
    }

    int suma = 0;
    int suma1 = 0;
    int suma2 = 0;
    int suma3 = 0;

    for( int rok=0; rok<Lata; ++rok)
    {
        for( int miesiac=0; miesiac<Miesiace; ++miesiac)
        {
           suma += sprzedaz[rok][miesiac];
        }

    }

    for( int miesiac = 0; miesiac<Miesiace; ++miesiac )
        suma1 += sprzedaz[0][miesiac];

    for( int miesiac = 0; miesiac<Miesiace; ++miesiac )
        suma2 += sprzedaz[1][miesiac];

    for( int miesiac = 0; miesiac<Miesiace; ++miesiac )
        suma3 += sprzedaz[2][miesiac];

    cout << endl << "Sprzedaz w pierwszym roku wyniosla: " << suma1 << endl;
    cout << "Sprzedaz w drugim roku wyniosla: " << suma2 << endl;
    cout << "Sprzedaz w trzecim roku wyniosla: " << suma3 << endl << endl;
    cout << "Laczna sprzedaz wyniosla: " << suma << endl;





    return 0;


}
