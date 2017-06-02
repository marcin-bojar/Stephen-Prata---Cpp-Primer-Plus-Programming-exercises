#include <iostream>
#include "Person.h"

int main()
{
    using std::cout;
    using std::endl;

    Person one;
    Person two( "Staszek");
    Person three( "Zenek", "Pimpek");

    one.show();
    cout << endl;
    one.formalShow();
    cout << endl;
    two.show();
    cout << endl;
    two.formalShow();
    cout << endl;
    three.show();
    cout << endl;
    three.formalShow();
    cout << endl;
    cout << "ZAMYKAM PROGRAM!" << endl;

    return 0;

}
