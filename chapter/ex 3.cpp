#include <iostream>

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void wyswietl( pudlo kartonik );
void objetosc ( pudlo *kartonik );

int main()
{
    pudlo kartonik = { "zefir", 20, 30, 60, 450 };
    wyswietl(kartonik);
    objetosc(&kartonik);

    return 0;
}

void wyswietl( pudlo kartonik )
{
    std::cout << "Producentem opakowania jest: " << kartonik.producent << std::endl;
    std::cout << "Wymiary opakowania to: " << kartonik.dlugosc << " na " << kartonik.wysokosc;
    std::cout << " na " << kartonik.szerokosc << ". Objetosc opakowania wynosi: " << kartonik.objetosc << std::endl;
}

void objetosc( pudlo *kartonik )
{
    kartonik->objetosc = kartonik->dlugosc * kartonik->szerokosc * kartonik->wysokosc;
    std::cout << "Poprawna objetosc opakowania wynosi: " << kartonik->objetosc << std::endl;
}
