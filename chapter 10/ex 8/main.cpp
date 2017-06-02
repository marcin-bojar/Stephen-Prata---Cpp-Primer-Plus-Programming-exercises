#include <iostream>
#include "List.h"

int main()
{
    List nowaLista;
    if(nowaLista.isempty())
        std::cout << "List is empty!\n";
    nowaLista.add(10);
    nowaLista.add(12);
    nowaLista.add(15);
    nowaLista.add(15.5);
    if(nowaLista.isempty())
        std::cout << "List is empty!\n";
    else
        std::cout << "List is not empty!\n";
    nowaLista.add(20);
    nowaLista.add(30);
    nowaLista.add(10.2);
    nowaLista.add(9.9);
    nowaLista.showList();
    if(nowaLista.isfull())
        std::cout << "List is full!\n";
    std::cout << "This function adds 10.5 to each list member.\n";
    nowaLista.visit(dodawanie);
    nowaLista.showList();

    return 0;
}
