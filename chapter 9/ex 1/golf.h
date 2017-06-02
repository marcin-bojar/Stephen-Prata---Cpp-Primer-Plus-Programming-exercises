#ifndef GOLF_H_
#define GOLF_H_

const int Len = 40;
const int tab = 6;

struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf( golf & g, std::string name, int hc);
int setgolf( golf & g );
void handicap( golf & g, int hc );
void showgolf( const golf & g );


#endif // GOLF_H
