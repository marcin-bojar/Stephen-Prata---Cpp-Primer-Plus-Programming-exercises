#include <iostream>
#include "stonewt.h"

using namespace std;

int main()
{
    StoneWt Stefek( 11, 10);
    StoneWt Zenek( 330);
    cout << "Mark weighs " << Stefek << endl;
    cout << "John weighs " << Zenek << endl;
    Stefek.pds_mode();
    Zenek.stn_mode();
    cout << "In pounds Mark weighs " << Stefek << endl;
    cout << "In stones John weighs " << Zenek << endl;
    StoneWt suma = Stefek + Zenek;
    cout << "Mark + John = " << suma << " which is ";
    suma.stn_mode();
    cout << suma << endl << "Multiplied by 3 gives: ";
    suma = suma * 3;
    cout << suma << " which is ";
    suma.stn_mode();
    cout << suma;

    return 0;
}
