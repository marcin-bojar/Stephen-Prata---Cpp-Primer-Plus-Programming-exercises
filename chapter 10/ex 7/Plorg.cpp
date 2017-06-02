#include "Plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg( const char * m_name, int m_CI)
{
  strncpy( name, m_name, LIMIT );
  CI = m_CI;
}

void Plorg::setCI()
{
    std::cout << "Enter new contentment index: ";
    while( !(std::cin >> CI))
    {
        std::cout << "Please enter number: ";
        std::cin.clear();
        while( std::cin.get() != '\n')
            continue;
    }
}

void Plorg::showPlorg() const
{
    std::cout << "I AM PLORG!\nMy name is: " << name << std::endl;
    std::cout << "My contentment index is: " << CI << std::endl;
}
