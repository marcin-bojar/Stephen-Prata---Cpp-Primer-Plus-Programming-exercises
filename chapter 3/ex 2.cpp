#include <iostream>

int ftAndIn_to_in( int, int );
double in_to_m( int );
double pounds_to_kg( int );
double bmi( double, double );

int main()
{
    using namespace std;

    cout << "Podaj wzrost (stopy): ";
    unsigned int ft;
    cin >> ft;
    while(!cin.good())
    {
        cout << "Podaj liczbe! ";
        cin.clear();
        cin.sync();
        cin >> ft;
    }

    cout << "Podaj wzrost (cale): ";
    unsigned int in;
    cin >> in;
    if(!cin.good())
    do
    {
        cout << "Podaj liczbe! ";
        cin.clear();
        cin.sync();
        cin >> in;
    }while( !cin.good());

    if( in > 11 )
      do
    {
       cout << "Podaj poprawna wartosc! ";
       cin.clear();
       cin.sync();
       cin >> in;
    }while( in > 11 || !cin.good() );

    cout << "Podaj wage w funtach: ";
    unsigned int pounds;
    cin >> pounds;
    while(!cin.good())
    {
        cout << "Podaj liczbe! ";
        cin.clear();
        cin.sync();
        cin >> ft;
    }

    int inch = ftAndIn_to_in( ft, in );
    double m = in_to_m( inch );
    double kg = pounds_to_kg( pounds );

    cout << "Twoje BMI wynosi: " << bmi(m, kg) << endl;

    return 0;

}

int ftAndIn_to_in( int ft, int in )
{
    return (ft * 12) + in ;
}

double in_to_m( int in )
{
    return in * 0.0254;
}

double pounds_to_kg( int lbs )
{
    return lbs / 2.2;
}

double bmi( double m, double kg )
{
    return kg / ( m * m);
}
