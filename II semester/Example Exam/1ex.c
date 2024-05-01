#include <stdio.h>
#include <string.h>

struct Patient
{
    char name[30];
    char chip_num[7];
    double price_of_examination;
};

typedef struct Patient Patient;

Patient createPatient()
{
    Patient p;
    printf("Enter owner's name (up to 30 characters): ");
    fgets(p.name, sizeof(p.name), stdin);

    int len = strlen(p.name);

    if (p.name[len - 1] == '\n')
    {
        p.name[len - 1] = '\0';
    }

    printf("Enter chip number (in format A12345B): ");
    scanf("%8s", p.chip_num);
    printf("Enter examination price: ");
    scanf("%lf", &p.price_of_examination);
    return p;
}

void findAndPrintPatients(Patient patients[], int size, double price)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (patients[i].price_of_examination == price)
        {
            printf("%s - %s\n", patients[i].name, patients[i].chip_num);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No patient found with the examination price of %.2f\n", price);
    }
}

void printPatientsFromBinaryFile(double price)
{
    FILE *file;

    if (file = fopen("AnimalsBin.bin", "rb") == NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    

    Patient p;
    while (fread(&p, sizeof(Patient), 1, file))
    {
        if (p.price_of_examination >= price)
        {
            printf("Bin OwnerName: %s\n", p.name);
            printf("Bin Chip: %s\n", p.chip_num);
            printf("Bin Price: %.2f\n", p.price_of_examination);
            printf("------------\n");
        }
    }

    fclose(file);
}

int main()
{
    FILE* fptr;

    if (fptr = fopen("test.txt", "a") == NULL)
    {
        printf("Can't open file.\n");
        exit(2);
    }

    int n;
    printf("Enter size of array: ");

    Patient* patients;

    patients = (Patient*)malloc(n * sizeof(Patient));

    for (int i = 0; i < n; i++)
    {
        patients[i] = createPatient();
        fprintf(fptr, "%s, %.2f\n", patients[i].name, patients[i].price_of_examination);
    }

    fclose(fptr);
    
    double searchPrice;
    printf("Enter price to search: ");
    scanf("%lf", &searchPrice);

    findAndPrintPatients(patients, 5, searchPrice);
    printPatientsFromBinaryFile(searchPrice);

    return 0;
}