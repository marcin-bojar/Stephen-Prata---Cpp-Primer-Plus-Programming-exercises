#include <iostream>

int main()
{
    using namespace std;

    const int in_per_ft = 12;
    int inch;

    cout << "Podaj wzrost w calach: __\b\b";
    cin >> inch;
    int ft = inch / in_per_ft;
    int in = inch % in_per_ft;


    cout << "Podany wzrost wynosi " << ft << " stop i " << in << " cali.";



    return 0;
}
