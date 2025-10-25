#include <iostream>
#include <math.h>

class triangle
{
private:
    double a, b, c;

public:
    triangle();
    double face();
    double face(double *);
    void show(char *);
    ~triangle() { std::cout << "Destructor called!"; }
};

triangle::triangle()
{
    do
    {
        std::cout << "\n\nEnter three values for the sides of the triangle:\n";
        std::cin >> a >> b >> c;
    } while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && ((a + c) > b) && ((b + c) > a))));
}

double triangle::face()
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

double triangle::face(double *p)
{
    double pp = a + b + c;
    *p = pp;
    pp /= 2;
    double s;
    s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
    return s;
}

void triangle::show(char *name)
{
    std::cout << "Sides of the triangle " << name << ":\n";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c;
}

int main ()
{
    triangle tr1;
    double p,s;
    tr1.show("tr1");
    std::cout << "\nThe face of triangle1 is s=" << tr1.face();
    triangle tr2;
    tr2.show("tr2");
    s=tr2.face(&p);
    std::cout << "The face of triangle2 is s=" << s << ", and the perimeter is p=" << p;

    return 0;
}