#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <cstring>

class Person
{
    private:
        static const int LIMIT = 256;
        std::string nazwisko;
        char imie[LIMIT];
    public:
        Person() { nazwisko = ""; imie[0] = '\0'; }
        Person( const std::string & nazwi, const char * im = "HejTy");
        void show() const;
        void formalShow() const;

};

#endif // PERSON_H
