
#include <stdio.h>
int main()

{
    int marks[2][2], i, j;
    printf("enter the elements");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    printf("even numbers:\n");

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            if (marks[i][j] % 2 == 0)
            {
                printf("its even %d \n", marks[i][j]);
            }
        }
    }

    printf("\n");
}