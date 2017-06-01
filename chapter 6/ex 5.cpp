#include <iostream>

int main()
{
    using namespace std;

    cout << "Podaj swoje zarobki: ";
    double zarobki;
    double podatek = 0;
    int a = 5000;
    int b = 10000;
    int c = 20000;
    int d = 35000;
    while( cin >> zarobki && !(zarobki < 0) )
    {

      if( zarobki <= 5000 )
        podatek = 0;
      else if( zarobki > 5000 && zarobki <= 15000 )
          podatek = (zarobki - a) * 0.10;
      else if( zarobki > 15000 && zarobki <= 35000 )
          podatek = (a * 0) + (b * 0.10) + ((zarobki - a - b) * 0.15);
      else if( zarobki > 35000 )
          podatek = (a * 0) + (b * 0.10) + (c * 0.15) + ((zarobki - d) * 0.20);

      cout << "Podatek wynosi: " << podatek << endl;
      cout << "Podaj swoje zarobki: ";

    }

    cout << endl << "ZAMYKAM PROGRAM!" << endl;



    return 0;

}
