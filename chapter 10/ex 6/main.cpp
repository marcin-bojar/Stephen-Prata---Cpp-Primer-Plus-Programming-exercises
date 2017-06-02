#include <iostream>
#include "Move.h"

int main()
{
    using std::cout;
    using std::endl;

    Move ruch1;
    cout << "Obiekt \"ruch1\" wywolany bez argumentow ma pozycje:\n";
    ruch1.showmove();
    Move ruch2(10.2, 11);
    cout << "Obiekt \"ruch2\" wywolany z argumentami 10.2 i 11 ma pozycje:\n";
    ruch2.showmove();
    Move ruch3(15.3, 12.5);
    cout << "Obiekt \"ruch3\" wywolany z argumentami 15.3 i 12.5 ma pozycje:\n";
    ruch3.showmove();
    ruch2 = ruch2.add(ruch3);
    cout << "Dodanie wsporzednych obiektu \"ruch2\" i \"ruch3\":\n";
    ruch2.showmove();

    return 0;


}
