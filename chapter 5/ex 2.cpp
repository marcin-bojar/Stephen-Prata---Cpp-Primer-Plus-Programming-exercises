#include <iostream>
#include <array>

const int ArSize = 101;

int main()
{
    using namespace std;
    array<long double, ArSize> factorials;
    factorials[0] = factorials[1] = 1.0L;
    for( int i = 2; i < 101; i++ )
        factorials[i] = i * factorials[i-1];
    for( int i = 0; i < 101; i++)
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}
