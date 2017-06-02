#include <iostream>
#include <cstring>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 10;
const int ile = 2;


int main()
{
  chaff * buffer = new chaff[BUF];
  chaff * tablica = new (buffer) chaff[ile];
  char * tekst = "Antek";

  strcpy(tablica[1].dross, tekst);
  tablica[1].slag = 5;
  strcpy(tablica[0].dross, "Mimek");
  tablica[0].slag = 60;

  for( int i=0; i<ile; i++)
  {
     std::cout << tablica[i].dross << "      " << tablica[i].slag << std::endl;
     std::cout << &tablica[i].dross << " " << &tablica[i].slag << std::endl;
  }

  std::cout << "Adres bufora: " << buffer << std::endl;
  std::cout << std::endl << "KONIEC PROGRAMU!" << std::endl;

    return 0;
}
