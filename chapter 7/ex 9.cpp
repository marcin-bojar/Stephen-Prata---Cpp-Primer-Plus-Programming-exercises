#include <iostream>

using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo( student pa[], int n );
void display1( student st );
void display2( const student * ps );
void display3( const student pa[], int n );

int main()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while( cin.get() != '\n' )
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for( int i = 0; i < entered; i++ )
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << endl << "Gotowe!" << endl;

    return 0;
}


int getinfo( student pa[], int n )
{
    int i;
    for( i = 0; i < n; i++)
    {
       cout << "Podaj imie i nazwisko studenta: " << endl;
       cin.getline(pa[i].fullname, SLEN );
       if( pa[i].fullname[0] == '\0')
            break;
       cout << "Jakie ten student ma hobby?" << endl;
       cin.getline(pa[i].hobby, SLEN );
       cout << "Na jakim poziomie programowania jest " << pa[i].fullname << "? (od 0 do 5)";
       while(!(cin >> pa[i].ooplevel) || pa[i].ooplevel < 0 || pa[i].ooplevel > 5)
       {
          cout << "Podaj poprawna wartosc!" << endl;
          cin.clear();
          cin.sync();
       }

    cin.get();

    }

    return i;
}

void display1( student st )
{
    cout << endl << "==================DISPLAY1=================" << endl;
    cout << "Imie i nazwisko studenta: " << st.fullname << endl;
    cout << "Jego hobby to: " << st.hobby << endl;
    cout << "Poziom zaawansowania w programowaniu (od 0 do 5): " << st.ooplevel << endl;
}

void display2( const student * ps )
{
    cout << endl << "==================DISPLAY2=================" << endl;
    cout << "Imie i nazwisko studenta: " << ps->fullname << endl;
    cout << "Jego hobby to: " << ps->hobby << endl;
    cout << "Poziom zaawansowania w programowaniu (od 0 do 5): " << ps->ooplevel << endl;
}

void display3( const student pa[], int n )
{
    for( int i = 0; i < n; i++ )
    {
        cout << endl << "==================DISPLAY3=================" << endl;
        cout << "Imie i nazwisko studenta: " << pa[i].fullname << endl;
        cout << "Jego hobby to: " << pa[i].hobby << endl;
        cout << "Poziom zaawansowania w programowaniu (od 0 do 5): " << pa[i].ooplevel << endl;
    }
}

