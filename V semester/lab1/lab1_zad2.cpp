#include <iostream>

typedef std::string string;

class Worker
{
private:
    short socialNum, workExp;
    string name, job;
    double salaries[];

public:
    string getName();
    string getJob();
    short getSocialNum();
    short getWorkExp();

    void setName(string name);
    void setJob(string job);
    void setSocialNum(short socialNum);
    void setWorkExp(short workExp);

    double avgSalary(int size);

    double minSalary(int size);

    Worker(short socialNum, short workExp, string name, string job, double salaries[], int size);
    Worker(string name, string job, double salaries[], int size);
    ~Worker()
    {
        std::cout << "Destructing worker!" << '\n';
    }
};

string Worker::getName() { return name; }
string Worker::getJob() { return job; }
short Worker::getSocialNum() { return socialNum; }
short Worker::getWorkExp() { return workExp; }

void Worker::setName(string name) { this->name = name; }
void Worker::setJob(string job) { this->job = job; }
void Worker::setSocialNum(short socialNum) { this->socialNum = socialNum; }
void Worker::setWorkExp(short workExp) { this->workExp = workExp; }

double Worker::avgSalary(int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += salaries[i];
    }

    return sum / size;
}

double Worker::minSalary(int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            double temp;
            if (salaries[j] > salaries[j + 1])
            {
                temp = salaries[j + 1];
                salaries[j + 1] = salaries[j];
                salaries[j] = temp;
            }
        }
    }

    return salaries[0];
}

Worker::Worker(short socialNum, short workExp, string name, string job, double salaries[], int size)
{
    this->socialNum = socialNum;
    this->workExp = workExp;
    this->name = name;
    this->job = job;

    for (int i = 0; i < size; i++)
    {
        this->salaries[i] = salaries[i];
    }
}

Worker::Worker(string name, string job, double salaries[], int size)
{
    this->name = name;
    this->job = job;
    this->workExp = 0;
    this->socialNum = 0;

    for (int i = 0; i < size; i++)
    {
        this->salaries[i] = salaries[i];
    }
}

int main()
{
    double salariesVlad[] = {1222.21};
    Worker obj1("Vladimir", "RMA", salariesVlad, 1);

    double salariesKris[] = {1343, 1000, 751};
    Worker obj2 (123, 2, "Kris", "Instalator of cameras", salariesKris, 3);

    std::cout << obj1.minSalary(1) << '\n';
    std::cout << obj2.minSalary(3) << '\n';

    return 0;
}