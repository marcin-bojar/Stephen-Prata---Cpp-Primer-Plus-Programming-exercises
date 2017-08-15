#include <iostream>
#include "complex0.h"

complex::complex(double r, double i)
{
    real = r;
    img = i;
}

complex::complex()
{
    real = img = 0;
}

complex complex::operator+(const complex & a) const
{
    return complex(real+a.real, img+a.img);
}

complex complex::operator-(const complex & a) const
{
   return complex(real-a.real, img-a.img);
}

complex complex::operator*(const complex & a) const
{
    return complex(real*a.real - img*a.img, (real*a.img + img*a.real));
}

complex complex::operator*(int a) const
{
    return complex(a*real, a*img);
}

complex operator*(int a, const complex & b)
{
    return b * a;
}

complex operator~(const complex & a)
{
    return complex(a.real, -a.img);
}

std::ostream & operator<<(std::ostream & os, const complex & a)
{
    os << "(" << a.real << "," << a.img << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & a)
{
   std::cout << "real: ";
   is >> a.real;
   std::cout << "imaginary: ";
   is >> a.img;

   return is;
}
