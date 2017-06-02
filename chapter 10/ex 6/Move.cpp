#include <iostream>
#include "Move.h"

Move::Move( double a, double b )
{
    x = a;
    y = b;
}

Move::showmove() const
{
    std::cout << "POZYCJA\nx = " << x << "\ny = " << y << std::endl;
}

Move Move::add( const Move & m) const
{
   double new_x = m.x + this->x;
   double new_y = m.y + this->y;
    Move new_move(new_x, new_y);

    return new_move;
}

Move::reset( double a, double b)
{
    x = a;
    y = b;
}
