#include "Person.h"
#include <iostream>
#include <string>
#include <cstring>


Person::Person( const std::string & nazwi, const char * im )
{
    this->nazwisko = nazwi;
    std::strncpy( imie, im, LIMIT );
}

void Person::show() const
{
    std::cout << "Imie: " << imie << std::endl;
    std::cout << "Nazwisko: " << nazwisko << std::endl;
}

void Person::formalShow() const
{
   std::cout << "Nazwisko: " << nazwisko << std::endl;
   std::cout << "Imie: " << imie << std::endl;
}
