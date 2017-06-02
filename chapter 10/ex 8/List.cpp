#include "List.h"
#include <iostream>

List::List()
{
    top = 0;
}
bool List::add(const Item & a)
{
    if(top < MAX)
    {
        items[top++] = a;
        return true;
    }
    else
        return false;

}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

void List::visit( void (*pf)(Item & v))
{

    for( int i = 0; i < top; i++)
         pf(items[i]);

}

void List::showList() const
{
    for( int i = 0; i < top; i++ )
    {
        if(top == 0)
            std::cout << "No entries, nothing to show!\n";
        else
            std::cout << "Position no " << i+1 << " on the list: " << items[i] << std::endl;
    }
}

void dodawanie(Item & v)
{
    std::cout << "Before adding: " << v << std::endl;
    v +=10.5;
    std::cout << "After adding: " << v << std::endl;
}
