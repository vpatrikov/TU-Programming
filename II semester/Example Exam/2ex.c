#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char date[11];
    char patientName[31];
    char diagnosis[51];
} Treatment;

int count_treatment(Treatment *history, int n, char *name, char *diagnosis)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(history[i].patientName, name) == 0 && strcmp(history[i].diagnosis, diagnosis) == 0)
        {
            ++count;
        }
    }
    return count;
}

Treatment *add_new_treatment(Treatment *history, int *n)
{
    Treatment newTreatment;
    printf("Enter ID: ");
    scanf("%d", &newTreatment.id);
    printf("Enter date (DD.MM.YYYY): ");
    scanf("%10s", newTreatment.date);
    printf("Enter patient name: ");
    scanf("%30s", newTreatment.patientName);
    printf("Enter diagnosis: ");
    scanf("%50s", newTreatment.diagnosis);

    Treatment *newHistory = realloc(history, (*n + 1) * sizeof(Treatment));
    if (!newHistory)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newHistory[*n] = newTreatment;
    (*n)++;
    return newHistory;
}

int write_text_file(Treatment *history, int n, char *diagnosis)
{
    FILE *file = fopen("illness.txt", "w");
    if (!file)
    {
        printf("Failed to open file\n");
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(history[i].diagnosis, diagnosis) == 0)
        {
            fprintf(file, "Болничен престой на %s\nза лечение на %s\n%s\n",
                    history[i].patientName, history[i].diagnosis, history[i].date);
            count++;
        }
    }

    fclose(file);
    return count;
}

int main()
{
    int n;
    FILE *file = fopen("history.bin", "rb");
    if (!file)
    {
        printf("Error opening file\n");
        return 1;
    }

    fread(&n, sizeof(int), 1, file);
    Treatment *history = malloc(n * sizeof(Treatment));
    if (!history)
    {
        printf("Memory allocation error\n");
        fclose(file);
        return 1;
    }

    fread(history, sizeof(Treatment), n, file);
    fclose(file);

    // Демонстрация на функциите може да се добави тук по желание

    free(history);
    return 0;
}
