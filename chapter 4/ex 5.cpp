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
   batonik snack = { "Mocha Munch", 2.3, 350 };
   std::cout << snack.nazwa << std::endl << snack.waga << std::endl << snack.kalorie << std::endl;

   return 0;
}
