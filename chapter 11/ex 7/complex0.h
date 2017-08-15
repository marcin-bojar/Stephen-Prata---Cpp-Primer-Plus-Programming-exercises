#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class complex
{
    private:
        int real;
        int img;
    public:
        complex(double r, double i);
        complex();
        complex operator+(const complex & a) const;
        complex operator-(const complex & a) const;
        complex operator*(const complex & a) const;
        complex operator*(int a) const;
        friend complex operator*(int a, const complex & b);
        friend complex operator~(const complex & a);
        friend std::ostream & operator<<(std::ostream & os, const complex & a);
        friend std::istream & operator>>(std::istream & is, complex & a);
};


#endif // COMPLEX0_H_
