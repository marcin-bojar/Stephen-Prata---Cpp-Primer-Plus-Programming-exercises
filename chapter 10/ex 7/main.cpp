#include <iostream>
#include "Plorg.h"

int main()
{
    std::cout << "Creating Plorg object...";
    Plorg newPlorg;
    std::cout << " Done!\n";
    std::cout << "Lets see what we have.\n";
    newPlorg.showPlorg();
    std::cout << "Setting Plorg's CI...\n";
    newPlorg.setCI();
    newPlorg.showPlorg();
    std::cout << "Lets create Plorg named Django with CI = 100.\n";
    Plorg second("Django", 100);
    second.showPlorg();

    return 0;
}
