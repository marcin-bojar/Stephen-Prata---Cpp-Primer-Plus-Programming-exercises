#ifndef GOLF_H
#define GOLF_H
#include <cstring>
#include <string>

class Golf
{
    private:
        static const int LIMIT = 40;
        char fullname[LIMIT];
        int handicap;
    public:
        Golf( const char * name, int hc );
        Golf();
        int setgolf();
        void show() const;
        void handi( int hc );
};

#endif // GOLF_H
