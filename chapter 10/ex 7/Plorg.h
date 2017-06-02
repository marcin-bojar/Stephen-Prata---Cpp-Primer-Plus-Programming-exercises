#ifndef PLORG_H
#define PLORG_H


class Plorg
{
    private:
        static const int LIMIT = 20;
        char name[LIMIT];
        int CI;
    public:
        Plorg( const char * m_name = "Plorga", int m_CI = 50 );
        void setCI();
        void showPlorg() const;
};

#endif // PLORG_H
