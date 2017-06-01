#include <iostream>
#include <string>

struct car
{
   std::string nazwa;
   int rocznik;
};

int main()
{
   using namespace std;

   cout << "Ile samochodow chcesz skatalogowac?";
   int ArSize;
   cin >> ArSize;
   car * katalog = new car[ArSize];
   for( int i=0; i<ArSize; ++i )
   {
        cout << "Samochod #" << i+1 << endl;
        cout << "Podaj marke auta: ";
        cin.get();
        getline( cin, katalog[i].nazwa);
        cout << "Podaj rok produkcji: ";
        cin >> katalog[i].rocznik;
   }

   for( int i=0; i<ArSize; ++i )
    cout << katalog[i].rocznik << " " << katalog[i].nazwa << endl;

   delete [] katalog;



    return 0;

}
