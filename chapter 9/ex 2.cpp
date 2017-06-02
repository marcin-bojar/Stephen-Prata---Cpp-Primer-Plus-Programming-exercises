#include <iostream>
#include <string>

void strcount( const std::string str );

int main()
{
    using namespace std;
    string lancuch;

    cout << "Wprowadz wiersz: " << endl;
    getline(cin, lancuch);
    while( lancuch != "" )
    {
        strcount( lancuch );
        cout << "Podaj nastepny wiersz (pusty wiersz konczy program): " << endl;
        getline(cin, lancuch);
    }

    cout << endl << "KONIEC PROGRAMU!" << endl;

    return 0;


}

void strcount( const std::string str )
{
    using namespace std;
    static int total = 0;

    cout << "\"" << str << "\" zawiera: " << str.size() << " znakow." << endl;
    total += str.size();
    cout << "Lacznie " << total << " znakow." << endl;
}
