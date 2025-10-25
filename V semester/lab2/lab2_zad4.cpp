#include <iostream>

class pr2;

class pr1
{
private:
    bool printing;

public:
    pr1() { printing = false; }
    void set_print(bool status) { printing = status; }
    bool get_print() { return this->printing; }

    // ! & means that the function takes the parameters by reference, not value
    // ? in this case the parameters are references to two objects of two claesses
    // ? which will not be modified in any case (declared as const)
    friend bool in_use(const pr1 &p1, const pr2 &p2);
};

class pr2
{
private:
    bool printing;

public:
    pr2() { printing = false; }
    void set_print(bool status) { printing = status; }
    bool get_print() { return this->printing; }

    friend bool in_use(const pr1 &p1, const pr2 &p2);
};

bool in_use(const pr1 &p1, const pr2 &p2)
{
    if (!p1.printing && !p2.printing)
        return false;
    else
        return true;
}

int main()
{
    pr1 printer1;
    pr2 printer2;

    std::cout << (in_use(printer1, printer2) ? "Printer in use" : "Printer is idle") << '\n';

    printer1.set_print(true);

    std::cout << (in_use(printer1, printer2) ? "Printer in use" : "Printer is idle") << '\n';
    
    return 0;
}