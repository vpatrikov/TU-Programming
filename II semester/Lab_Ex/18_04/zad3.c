#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    double grade;
};

typedef struct Student Student;

struct Graduation
{
    Student students[30];
    int count;
};

typedef struct Graduation Graduation;

int main()
{
    Graduation graduation;

    graduation.count = 0;

    while (1)
    {
        printf("\nEnter the amount of students you want to enter (up to 30): ");

        if (!scanf("%d", &graduation.count) || graduation.count > 30)
        {
            while (getchar() != '\n')
                printf("Invalid input\n");
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < graduation.count; i++)
    {
        printf("\n\nEnter the name and grade of student #%d: ", (i + 1));
        scanf("%s %lf", &graduation.students[i].name, &graduation.students[i].grade);
    }

    double sum = 0;

    for (int i = 0; i < graduation.count; i++)
    {
        sum += graduation.students[i].grade;
    }

    double average = sum / graduation.count;

    printf("\nThe class average grade is: %.2f\n", average);
    
}