#ifndef LIST_H
#define LIST_H

typedef double Item;

class List
{
    private:
        static const int MAX = 8;
        Item items[MAX];
        int top;
    public:
        List();
        bool add(const Item & a);
        bool isempty() const;
        bool isfull() const;
        void visit( void (*pf)(Item & v));
        void showList() const;
};

void dodawanie( Item & v );

#endif // LIST_H
