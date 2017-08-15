#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int trails;
    double min;
    double max;
    static unsigned long STEPS;

    cout << "Please enter number of trails: ";
    while( !(cin >> trails))
    {
        cout << "Please enter integer: ";
        cin.clear();
        while( cin.get() != '\n')
            continue;
    }
    cout << "Enter target distance (q to quit): ";
    cin >> target;
    cout << "Enter step length: ";
    while(!(cin >> dstep))
        {
            cout << "Please enter integer: ";
            cin.clear();
            while(cin.get() != '\n')
                continue;
        }

    unsigned long * number_of_steps = new unsigned long[trails];

    int i = 0;
    do
    {
        while (result.magval() < target)
        {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
        }
        result.polar_mode();
        cout << "Location after " << i+1 << " trail: " << result;
        cout << " after " << steps << " steps.\n";
        STEPS += steps;
        number_of_steps[i] = steps;
        steps = 0;
        result.reset(0.0, 0.0);
        i++;
    }while( i < trails );

        cout << "After " << trails << " trails subject "
            "has the following statistics:\n";
        cout << STEPS << " steps in total\n";
        cout << "Average number of steps in one trail is " << (double)STEPS / (double)trails << "\n";

        min = number_of_steps[0];
        for( int j = 1; j < trails; j++)
        {
            if(min > number_of_steps[j])
                min = number_of_steps[j];
            else
                continue;
        }
        cout << "The lowest number of steps in one trail is " << min << "\n";

        max = number_of_steps[0];
        for( int j = 1; j < trails; j++)
        {
            if(max < number_of_steps[j])
                max = number_of_steps[j];
            else
                continue;
        }
        cout << "The highest number of steps in one trail is " << max << "\n";

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    delete [] number_of_steps;

    return 0;
}

