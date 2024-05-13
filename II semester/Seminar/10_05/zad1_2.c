#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[31];
    long fac_num;
    int group_num;
    double grade;
} Student;

void enter_data(Student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the name of student #%d: ", (i + 1));
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        printf("Enter the fac num of the student: ");
        scanf("%ld", &students[i].fac_num);
        printf("Enter the group of the student: ");
        scanf("%d", &students[i].group_num);
        printf("Enter the grade of the student: ");
        scanf("%lf", &students[i].grade);
        getchar();
    }
}

void print_data(Student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n\nStudent #%d\n", (i + 1));
        printf("Name: %s, Faculty num: %ld, Group: %d, Grade: %.2lf", students[i].name, students[i].fac_num, students[i].group_num, students[i].grade);
    }
}

double find_average_of_grade_by_group(Student *students, int size, int group)
{
    int sum = 0, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (students[i].group_num == group)
        {
            sum += students[i].grade;
            count++;
        }
    }

    return sum / count;
}

Student *find_all_with_perfect_grade(Student *students, int size)
{
    Student *return_students = (Student *)malloc(size * sizeof(Student));
    if (!return_students)
    {
        printf("Unable to allocate memory\n");
        exit(1);
    }

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (students[i].grade >= 5.50)
        {
            return_students[count] = students[i];
            count++;
        }
    }

    return_students = realloc(return_students, count * sizeof(Student));
    if (!return_students)
    {
        printf("Unable to reallocate memory\n");
        free(return_students);
        exit(2);
    }

    return return_students;
}

void print_students_from_group(Student *students, int size, int group)
{
    int count = 0;
    printf("Students from %d group:\n\n");
    for (int i = 0; i < size; i++)
    {
        if (students[i].group_num == group)
        {
            printf("\nName: %s, Faculty num: %ld, Grade: %.2lf", students[i].name, students[i].fac_num, students[i].grade);
            count++;
        }
    }
    if (count < 0)
    {
        printf("No students were found from this group.\n\n");
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("Enter n: ");
        scanf("%d", &n);

        if (n < 20)
        {
            break;
        }
        else
        {
            printf("Invalid Input.");
        }
    }

    Student *students = (Student *)malloc(n * sizeof(Student));

    if (!students)
    {
        printf("Unable to allocate memory.\n");
        exit(3);
    }

    int choice;

    printf("Enter what you want to do:\n1. Enter data in array\n2. Print all data in array\n3. Find average grade in group\n4. Print all students with grade above 5.50\n5. Print students from group");

    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    case 1:
        enter_data(students, n);
        break;
    case 2:
        print_data(students, n);
        break;
    case 3:
    {
        int temp_group;
        printf("Enter the group to find the average of: ");
        scanf("%d", &temp_group);
        find_average_of_grade_by_group(students, n, temp_group);
        break;
    }
    case 4:
    {
        Student *perfect = find_all_with_perfect_grade(students, n);

        int size = sizeof(perfect) / sizeof(Student);

        if (size <= 0)
        {
            printf("No perfect students were found\n");
        }
        else
        {
            for (int i = 0; i < sizeof(perfect) / sizeof(Student); i++)
            {
                printf("Name: %s, Faculty num: %ld, Group: %d, Grade: %.2lf\n", perfect[i].name, perfect[i].fac_num, perfect[i].group_num, perfect[i].grade);
            }
        }
        break;
    }
    case 5:
    {
        int temp_group;
        printf("Enter the group from which you want to print the students: ");
        scanf("%d", &temp_group);
        print_students_from_group(students, n, temp_group);
        break;
    }
    default:
        printf("Invalid Choice");
        break;
    }

    free(students);
    return 0;
}