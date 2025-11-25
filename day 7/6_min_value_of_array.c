
#include <stdio.h>
int main()
{
    int array[5], min = 0;
    printf("enter a num:");
    for (int i = 0; i <= 5 - 1; i++)
    {
        scanf("%d", &array[i]);
    }
    min = array[0];
    for (int i = 0; i < 5 - 1; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Minimun is value is %d \n", min);
}