#include <iostream>
#include "stonewt.h"

int main()
{
    Stonewt arr[6] = {140, 183, 330};
    std::cout << "Please enter values in pounds of 3 objects.\n";
    int lbs;
    for(int i = 3; i < 6; i++)
    {
        std::cout << "Value of object " << i-2 << ": ";
        std::cin >> lbs;
        arr[i] = lbs;
    }



    Stonewt min = arr[0];
    Stonewt max = arr[0];
    Stonewt equal(11, 0);
    int indexMIN = 0;
    int indexMAX = 0;
    int count = 0;
    for(int i = 1; i < 6; i++)
    {
        if(arr[i] < min)
        {
           min = arr[i];
           indexMIN = i;
        }

        if(arr[i] > max)
        {
          max = arr[i];
          indexMAX = i;
        }

    }
    for(int i = 0; i < 6; i++)
    {
        if( arr[i] == equal)
            count++;
    }

    std::cout << "Index of the lowest value in array is: " << indexMIN << std::endl;
    std::cout << "Index of the highest value in array is: " << indexMAX << std::endl;
    std::cout << "Number of items in array equal to 11 stones: " << count << std::endl;

    return 0;

}
