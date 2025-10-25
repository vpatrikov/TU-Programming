#include <iostream>

short getInput(char s)
{
    short temp;
    while (true)
    {
        if (s == 'h')
        {
            std::cout << "Enter hour: " << '\n';
            std::cin >> temp;

            if (temp < 0 || temp > 23)
            {
                std::cout << "Invalid hour!";
            }
            else
            {
                
                return temp;
            }
        }
        else if (s == 'm')
        {
            std::cout << "Enter minutes: " << '\n';
            std::cin >> temp;

            if (temp < 0 || temp > 59)
            {
                std::cout << "Invalid minutes!" << '\n';
            }
            else
            {
                return temp;
            }
        }
        else if (s == 's')
        {
            std::cout << "Enter seconds: ";
            std::cin >> temp;

            if (temp < 0 || temp > 59)
            {
                std::cout << "Invalid seconds!" << '\n';
            }
            else
            {
                return temp;
            }
        }
    }
}

class Time
{
private:
    short hour, minutes, seconds;

public:
    Time();
    void printTime();
    ~Time()
    {
        std::cout << "Destructing object time!" << '\n';
    }
};

Time::Time()
{
    hour = getInput('h');
    minutes = getInput('m');
    seconds = getInput('s');
}

void Time::printTime()
{
    std::cout << hour << ":"  << minutes << ":" << seconds << '\n';
    
    if (hour >= 12)
    {
        hour -= 10;
        std::cout << hour << ":"  << minutes << ":" << seconds << " PM" << '\n'; 
    }
    else
    {
        std::cout << hour << ":"  << minutes << ":" << seconds << " AM" << '\n'; 
    }
    
    
}

int main()
{
    Time time;
    time.printTime();
    return 0;
}