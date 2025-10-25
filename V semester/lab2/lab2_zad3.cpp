#include <iostream>
#include <string>

class Stack // stack raboti s FIFO
{
private:
    std::string stack_contents;

public:
    std::string loadstack(int upper);
    void setStackContents(std::string sc);
    std::string getStackContents();
    char pop();
    void add(char c);
};

std::string Stack::loadstack(int upper)
{
    switch (upper)
    {
    case 0:
        setStackContents("abcdefghijklmnopqrstuvwxyz");
        break;

    case 1:
        setStackContents("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        break;

    default:
        std::cout << "invalid value entered for 'upper' integer\n";
        break;
    }

    return getStackContents();
}

std::string Stack::getStackContents()
{
    return this->stack_contents;
}

void Stack::setStackContents(std::string sc)
{
    this->stack_contents = sc;
}
char Stack::pop()
{
    char last = stack_contents.back();
    stack_contents.pop_back();
    return last;
}

void Stack::add(char c)
{
    stack_contents += c;
}

int main()
{
    Stack st;
    st.loadstack(1);
    std::cout << st.getStackContents() << '\n';
    std::cout << "popped last char from stack";
    std::cout << '\n' << st.pop() << '\n';
    std::cout << st.getStackContents() << '\n';
    std::cout << "adding char 'c' to stack" << '\n';
    st.add('c');
    std::cout << st.getStackContents() << '\n';

    return 0;
}