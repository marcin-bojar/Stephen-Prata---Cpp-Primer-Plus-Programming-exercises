#include <iostream>
#include <string>

void pokazMenu();

struct zpdw
{
    std::string imie;
    std::string stanowisko;
    std::string pseudonim;
    int preferencje;
};

int main()
{
    using namespace std;

    int ArSize = 5;

    zpdw tablicaDanych[ArSize] =
    {
        {"Zenek", "sprzatacz", "Lolo", 1},
        {"Stefan", "smieciarz", "Gruby", 0},
        {"Marian", "kierowca", "Lis", 2},
        {"Marek", "kierownik", "Chudy", 0},
        {"Darek", "prezes", "Prezes", 1}
    };

  cout << "Zakon Programistow Dobrej Woli" << endl;
  pokazMenu();
  char wybor;
  while( cin >> wybor && wybor != 'q')
  {
    switch(wybor)
    {
        case 'a' : for( int i=0; i<ArSize; ++i )
                    cout << tablicaDanych[i].imie << endl;
                    break;
        case 'b' : for( int i=0; i<ArSize; ++i )
                    cout << tablicaDanych[i].stanowisko << endl;
                    break;
        case 'c' : for( int i=0; i<ArSize; ++i )
                    cout << tablicaDanych[i].pseudonim << endl;
                    break;
        case 'd' : for( int i=0; i<ArSize; ++i )
                        {
                            if( tablicaDanych[i].preferencje == 0 )
                            cout << tablicaDanych[i].imie << endl;
                            else if( tablicaDanych[i].preferencje == 1 )
                            cout << tablicaDanych[i].stanowisko << endl;
                            else
                            cout << tablicaDanych[i].pseudonim << endl;
                        }
                    break;
        default : cout << "Nie ma takiej opcji!" <<  endl;

    }
    cout << endl;
    pokazMenu();
  }

  cout << endl << "KONIEC PROGRAMU!!!" << endl;

  return 0;
}

void pokazMenu()
{
    using std::cout;
    using std::endl;
    cout << "a. lista wg imion        b. lista wg stanowisk" << endl;
    cout << "c. lista wg pseudonimow  d. lista wg preferencji" << endl;
    cout << "q. koniec" << endl;
}
