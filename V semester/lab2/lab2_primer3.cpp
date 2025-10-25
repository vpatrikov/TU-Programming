#include <iostream>

class truck;

class car
{
private:
    int passenger, speed;

public:
    car(int p, int s)
    {
        passenger = p;
        speed = s;
    }
    int sp_greater(truck t);
};

class truck
{
    int weight;
    int speed;

public:
    truck(int w, int s)
    {
        weight = w;
        speed = s;
    }

    friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t)
{
    return speed - t.speed;
}

int main()
{
    int t;
    car c1 (6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);

    std::cout << "Comparing c2 and t2:\n";
    t = c1.sp_greater(t1);
    if(t<0) std::cout << "Truck is faster.\n";
    else if (t == 0) std::cout << "Truck and car speed is the same\n";
    else std::cout << "Car is faster\n";

    return 0;
}