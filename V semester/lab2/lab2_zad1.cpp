#include <iostream>

class Rectangle
{
private:
    int a, b;

public:
    Rectangle(int a, int b);
    Rectangle();
    void setA(int a);
    int getA();
    void setB(int b);
    int getB();
    int calculateP();
    int calculateS();
    void showInfo();
};

Rectangle::Rectangle(int a, int b)
{
    this->a = a;
    this->b = b;
}

void Rectangle::setA(int a)
{
    this->a = a;
}

int Rectangle::getA()
{
    return this->a;
}

void Rectangle::setB(int b)
{
    this->b = b;
}

int Rectangle::getB()
{
    return this->b;
}

int Rectangle::calculateP()
{
    return 2 * (a + b);
}

int Rectangle::calculateS()
{
    return a * b;
}

void Rectangle::showInfo()
{
    std::cout << "The sides of the rectangle are a=" << a << ", b=" << b << '\n';
    std::cout << "The perimeter of the rectangle is " << calculateP() << '\n';
    std::cout << "The area of the rectangle is " << calculateS() << '\n';
}

int main()
{
    Rectangle r1(5,6);

    r1.showInfo();
    return 0;
}
