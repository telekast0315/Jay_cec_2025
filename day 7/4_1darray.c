#include <stdio.h>
int main()
{
    int array[5];
    printf("enter a num:");
    for (int i = 0; i <= 5 - 1; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Araay elements:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is %d \n", i + 1, array[i]);
    }
}