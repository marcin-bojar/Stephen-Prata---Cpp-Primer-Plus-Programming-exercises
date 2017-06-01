#include <iostream>
#include <cctype>
#include <string>

int main()
{
    using namespace std;

    string znak;
    int inne = 0;
    int spolgloski = 0;
    int samogloski = 0;

    cout << "Podawaj slowa (wpisz \"q\" aby zakonczyc)." << endl;
    while( cin >> znak && znak != "q" )
    {
        if( isalpha(znak[0]))
        {
           znak[0] = tolower(znak[0]);
            if(znak[0] == 'a' || znak[0] == 'o' || znak[0] == 'u' || znak[0] == 'i' || znak[0] == 'e' || znak[0] == 'y')
                ++samogloski;
            else
                ++spolgloski;
        }
        else
            ++inne;
    }
    cout << spolgloski << " slow zaczyna sie na spolgloske." << endl;
    cout << samogloski << " slow zaczyna sie na samogloske." << endl;
    cout << inne << " slow zaczyna sie na inny znak." << endl;

        return 0;


}
