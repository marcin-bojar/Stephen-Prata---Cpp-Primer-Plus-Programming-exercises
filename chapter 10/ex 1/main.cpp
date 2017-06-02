#include <iostream>
#include "KontoBankowe.h"
#include <string>
#include <cctype>

int main()
{
  using namespace std;
  int choice;
  string m_nazwisko;
  string m_num_konta;
  double m_saldo;
  double m_kwota;
  KontoBankowe nowe;


  cout << ">>> Witamy w rejestrze bankowym ING <<<" << endl;
  cout << "Co chcesz zrobic?" << endl;
  cout << "\t [1] Utworz nowego klienta" << endl;
  cout << "\t [2] Wyswietl dane istniejacego klienta" << endl;
  cout << "\t [3] Deponuj wplate" << endl;
  cout << "\t [4] Zaksieguj wyplate" << endl;
  cout << "\t [5] Zakoncz program" << endl;
  cin >> choice;
  cin.get();

      if( choice < 1 || choice > 5 )
      {
         cout << "Nie ma takiej opcji, wybierz ponownie: ";
         cin >> choice;
         cin.get();
      }

      switch(choice)
      {
          case 1:
                    cout << "Tworzenie nowego klienta." << endl;
                    cout << "Podaj imie oraz nazwisko: ";
                    getline( cin, m_nazwisko);
                    cout << "Podaj numer konta ";
                    getline( cin, m_num_konta );
                    cout << "Podaj saldo: ";
                    cin >> m_saldo;
                    nowe = KontoBankowe( m_nazwisko, m_num_konta, m_saldo );

                    break;
         case 2:
                   nowe.show();
                   break;
         case 3:
                   cout << "Jaka kwote wplacono: ";
                   cin >> m_kwota;
                   nowe.wplata( m_kwota );

                   break;
         case 4:
                   cout << "Jaka kwote wyplacono: ";
                   cin >> m_kwota;
                   nowe.wyplata( m_kwota );
                   break;
         case 5:
                   cout << "ZAMYKAM PROGRAM!!!" << endl;
                   return 0;
      }

    do
    {
        cout << "Co chcesz teraz zrobic?" << endl;
        cout << "\t [1] Utworz nowego klienta" << endl;
        cout << "\t [2] Wyswietl dane istniejacego klienta" << endl;
        cout << "\t [3] Deponuj wplate" << endl;
        cout << "\t [4] Zaksieguj wyplate" << endl;
        cout << "\t [5] Zakoncz program" << endl;
        cin >> choice;
        cin.get();

  switch(choice)
      {
          case 1:
                    cout << "Tworzenie nowego klienta." << endl;
                    cout << "Podaj imie oraz nazwisko: ";
                    getline( cin, m_nazwisko);
                    cout << "Podaj numer konta ";
                    getline( cin, m_num_konta );
                    cout << "Podaj saldo: ";
                    cin >> m_saldo;
                    nowe = KontoBankowe( m_nazwisko, m_num_konta, m_saldo );

                    break;
         case 2:
                   nowe.show();
                   break;
         case 3:
                   cout << "Jaka kwote wplacono: ";
                   cin >> m_kwota;
                   nowe.wplata( m_kwota );

                   break;
         case 4:
                   cout << "Jaka kwote wyplacono: ";
                   cin >> m_kwota;
                   nowe.wyplata( m_kwota );
                   break;
         case 5:
                   cout << "ZAMYKAM PROGRAM!!!" << endl;
                   return 0;

  }

}while( choice != 5);

}
