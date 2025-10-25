#include <iostream>

class truck;

class car
{
    int passenger, speed;

public:
    car(int p, int s);
    car();
    int getPassenger();
    void setPassenger(int p);
    int getSpeed();
    void setSpeed(int s);
    ~car() { std::cout << "\nDestructor for car called\n"; }

    friend int sp_greater(car c, truck t);
    friend int timeToPass(int s, int t);
};

car::car(int p, int s)
{
    passenger = p;
    speed = s;
}

int car::getPassenger()
{
    return this->passenger;
}

void car::setPassenger(int p)
{
    this->passenger = p;
}

int car::getSpeed()
{
    return this->speed;
}

void car::setSpeed(int s)
{
    this->speed = s;
}

class truck
{
    int weight;
    int speed;

public:
    truck(int w, int s);
    truck();
    int getWeight();
    void setWeight(int w);
    int getSpeed();
    void setSpeed(int s);
    ~truck() { std::cout << "\nDestructor for truck called\n"; }

    friend int sp_greater(car c, truck t);
    friend int timeToPass(int s, int t);
};

truck::truck(int w, int s)
{
    weight = w;
    speed = s;
}

int truck::getWeight()
{
    return this->weight;
}

void truck::setWeight(int w)
{
    this->weight = w;
}

int truck::getSpeed()
{
    return this->speed;
}

void truck::setSpeed(int s)
{
    this->speed = s;
}

int sp_greater(car c, truck t)
{
    return c.speed - t.speed;
}

int timeToPass(int s, int t)
{
    return s * t;
}

int main()
{
    int t;
    car c1(6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);

    std::cout << timeToPass(c1.getSpeed(), 70);

    return 0;
}