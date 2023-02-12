#include <stdio.h>

const int STUDENTS = 5;
const int SUBJECTS = 4;

void get_data(char[][20], int[][SUBJECTS + 1]);
void print_data(char[][20], int[][SUBJECTS + 1]);
void sort_data(char[][20], int[][SUBJECTS + 1]);
void swap_name(char[], char[]);
void swap_marks(int[], int[]);
void total_of_marks(int[][SUBJECTS + 1]);

int main()
{
    printf("Input students names & their marks in four subjects\n");

    char name[STUDENTS][20];
    int marks[STUDENTS][SUBJECTS + 1];

    get_data(name, marks);
    printf("\n");

    total_of_marks(marks);
    print_data(name, marks);

    printf("\nRanked List\n\n");

    sort_data(name, marks);
    print_data(name, marks);

    return 0;
}

void get_data(char names[][20], int array[][SUBJECTS + 1])
{
    int(*rowptr)[SUBJECTS + 1] = array, m, n;

    for (m = 0; m < STUDENTS; m++)
    {
        scanf("%s", &names[m]);
        for (n = 0; n < SUBJECTS; n++)
        {
            scanf("%d", &array[m][n]);
        }
    }
}

void print_data(char names[][20], int array[][SUBJECTS + 1])
{
    int(*rowptr)[SUBJECTS + 1] = array, m, n;

    for (m = 0; m < STUDENTS; m++)
    {
        printf("%-20s", names + m);
        for (n = 0; n < SUBJECTS + 1; n++)
        {
            printf("%5d", rowptr[m][n]);
        }
        printf("\n");
    }
}

void sort_data(char names[][20], int array[][SUBJECTS + 1])
{
    int(*rowptr)[SUBJECTS + 1] = array, m;

    for (m = 0; m < STUDENTS - 1; m++)
    {
        if(m < 0) continue;

        if (rowptr[m][SUBJECTS] < rowptr[m + 1][SUBJECTS])
        {
            swap_name(names + m, names + m + 1);
            swap_marks(rowptr + m, rowptr + m + 1);

            m -= 2;
            continue;
        }
    }
}

void swap_name(char name_1[], char name_2[])
{
    char temp[20], m;

    for (m = 0; m < 20; m++)
    {
        temp[m] = name_1[m];
        name_1[m] = name_2[m];
        name_2[m] = temp[m];
    }
}

void swap_marks(int marks_1[], int marks_2[])
{
    int temp[SUBJECTS + 1], m;

    for (m = 0; m < SUBJECTS + 1; m++)
    {
        temp[m] = marks_1[m];
        marks_1[m] = marks_2[m];
        marks_2[m] = temp[m];
    }
}

void total_of_marks(int array[][SUBJECTS + 1])
{
    int (*rowptr)[SUBJECTS + 1] = array, m, n;

    for(m = 0; m < STUDENTS; m++)
    {
        rowptr[m][SUBJECTS] = 0;
        for(n = 0; n < SUBJECTS; n++)
        {
            rowptr[m][SUBJECTS] += rowptr[m][n];
        }
    }
}