#include <iostream>

void dodawanie(int a, int b)
{
    using namespace std;
    cout << "Suma liczb z zakresu od " << a << " do " << b << " wynosi: ";
    int iWynik = 0;

   for( a; a<=b; a++)
      iWynik += a;

    cout << iWynik << endl;

}

int wybierzLiczbe()
{
    using namespace std;
    cout << "Podaj liczbe: ";
    int liczba;
    cin >> liczba;

    return liczba;
}



int main()
{
   int a = wybierzLiczbe();
   int b = wybierzLiczbe();
   dodawanie(a, b);

    return 0;
}


