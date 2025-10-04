#include <iostream>

class Line
{
private:
    int len;

public:
    int getLen();
    void setLen(int len);
    void println();
    Line(int len);
    ~Line()
    {
        std::cout << "\nLine destroyed.\n";
    }
};

int Line::getLen() { return len; }
void Line::setLen(int len) { this->len = len; }

Line::Line(int len)
{
    this->len = len;
    println();
}

void Line::println()
{
    for (int i = 0; i < len; i++)
    {
        std::cout << '*';
    }
}
int main()
{
    Line obj1(10);
    obj1.getLen();
    
    int newLen;
    std::cout << "Enter new length of line: " << '\n';
    std::cin >> newLen;
    
    obj1.setLen(newLen);
    obj1.println();

    return 0;
}