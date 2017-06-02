#ifndef KONTOBANKOWE_H
#define KONTOBANKOWE_H
#include <string>

class KontoBankowe
{
    private:
        std::string nazwisko;
        std::string num_konta;
        double saldo;

    public:
        KontoBankowe( const std::string & m_nazwisko, const std::string & m_num_konta, double & m_saldo );
        KontoBankowe();
        void show() const;
        void wplata( double m_kwota );
        void wyplata( double m_kwota );
};

#endif // KONTOBANKOWE_H
