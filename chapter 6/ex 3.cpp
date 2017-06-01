#include <iostream>

void pokazMenu();
void roslinozerca();
void pianista();
void drzewo();
void gra();

int main()
{
    using namespace std;
    pokazMenu();
    char litera;
    cin >> litera;
    while( litera != 'r' && litera != 'p' && litera != 'd' && litera != 'g' )
       {
           cout << "Prosze podac litere r, p, d lub g: ";
           cin >> litera;
       }

        switch( litera )
    {
        case 'r' : roslinozerca();
                   break;
        case 'p' : pianista();
                   break;
        case 'd' : drzewo();
                   break;
        case 'g' : gra();
                   break;
    }

    cout << endl << "KONIEC PROGRAMU" << endl;

    return 0;
}

void pokazMenu()
{
    using std::cout;
    using std::endl;
    cout << "r) roslinozerca        p) pianista" << endl;
    cout << "d) drzewo              g) gra" << endl;
    cout << "Prosze podac litere r, p, d lub g: ";

}

void roslinozerca()
{
    std::cout << "Mis panda jest przedstawicielem roslinozercow." << std::endl;
}

void pianista()
{
    std::cout << "Pianista to swietny film! Co sadzisz?" << std::endl;

}

void drzewo()
{
    std::cout << "Klon jest drzewem." << std::endl;

}

void gra()
{
    std::cout << "Chcesz zagrac w gre?" << std::endl;
}
