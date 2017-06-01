#include <iostream>

int main()
{
    using namespace std;

    cout << "Podaj liczbe wierszy: ";
    int wiersze;
    int zmiana = 1;
    cin >> wiersze;

    for( int i=1; i<=wiersze; i++ )
    {
         for( int i=1; i<=wiersze-zmiana  ; i++ )
            cout << ".";
           for( int i=1; i<=zmiana  ; i++ )
                cout << "*";

        zmiana++;
        cout << endl;



    }

        return 0;
}
