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

    batonik snacki[3] =
    {
       { "snickers", 2.7, 400 },
       { "mars", 2.4, 380 },
       { "lion", 3.0, 330 }
    };

    for( int i=0; i<3; i++ )
    {
        cout << snacki[i].nazwa << ", " << snacki[i].waga << ", " << snacki[i].kalorie << endl;
    }

    return 0;
}
