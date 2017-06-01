#include <iostream>
#include <string>

struct batonik
    {
       std::string nazwa;
       double waga;
       int kalorie;

    };
int main()
{
    using namespace std;

    batonik * snacki = new batonik [3];

      snacki[0] = { "snickers", 2.7, 400 };
      snacki[1] =  { "mars", 2.4, 380 };
      snacki[2] = { "lion", 3.0, 330 };

    for( int i=0; i<3; i++ )
    {
        cout << snacki[i].nazwa << ", " << snacki[i].waga << ", " << snacki[i].kalorie << endl;
    }

    delete [] snacki;

    return 0;
}
