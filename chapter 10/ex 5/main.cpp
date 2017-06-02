#include <iostream>
#include "stack.h"
#include <cstring>

int main()
{
    customer one;
    double sum = 0;
    Stack st;

    do
    {
        std::cout << "Enter client name (blank to quit): ";
        std::cin.getline( one.fullname, 35 );
        if( one.fullname[0] == '\0')
            break;
        std::cout << "Enter payment: ";
        while( !(std::cin >> one.payment) )
        {
            std::cout << "You haven't entered number! Try again: ";
            std::cin.clear();
            while( std::cin.get() != '\n')
                continue;
        }
        std::cin.get();
        if( st.isfull() )
            std::cout << "Stack is full!\n";
        else
        {
            st.push(one);
            std::cout << one.fullname << " saved!\n";
        }
    }while( one.fullname[0] != '\0');

    do
    {
        st.pop(one);
        sum += one.payment;
        std::cout << one.fullname << " removed. Payment sum: " << sum << std::endl;
        if( st.isempty() )
        std::cout << "Stack is empty!\n";
    }while( !st.isempty());

    std::cout << "CLOSING APPLICATION!!!";

        return 0;
}
