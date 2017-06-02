#include "KontoBankowe.h"
#include <iostream>
#include <string>


    KontoBankowe::KontoBankowe()
    {
        std::string nazwisko = "brak danych";
        std::string num_konta = "nie podano";
        double saldo = 0.0;
    }

    KontoBankowe::KontoBankowe( const std::string & m_nazwisko, const std::string & m_num_konta, double & m_saldo )
    {
        this->nazwisko = m_nazwisko;
        this->num_konta = m_num_konta;
        if( m_saldo < 0 )
            this->saldo = 0.0;
        else
            this->saldo = m_saldo;
    }

    void KontoBankowe::show() const
    {
        std::cout << "Imie i nazwisko posiadacza rachunku: " << this->nazwisko << "." << std::endl;
        std::cout << "Numer rachunku bankowego: " << this->num_konta << std::endl;
        std::cout << "Saldo biezace rachunku: " << this->saldo << " PLN" << std::endl;
    }

    void KontoBankowe::wplata( double m_kwota )
    {
        if( m_kwota <= 0 )
           std::cout << "Kwota wplacana nie moze byc zerem lub mniejsza od zera!\n ";
        else
        {
           this->saldo += m_kwota;
           std::cout << "Wplata w wysokosci " << m_kwota << " PLN zostala zaksiegowana! ";
        }

    }

    void KontoBankowe::wyplata( double m_kwota )
    {
        if( m_kwota > this->saldo )
            std::cout << "Nie mozna wyplacic wiecej niz jest zdeponowane na koncie!\n";
        else
        {
            this->saldo -= m_kwota;
            std::cout << "Z konta zostalo wyplacone " << m_kwota << " PLN. ";
        }

    }


