
#include <stdio.h>
int main()
{
    int array[5], max=5;
    printf("enter a num:");
    for (int i = 0; i < 5 ; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    for (int i = 0; i < 5 ; i++)
    {
        if (array[i] >max)
        {
            max = array[i];
        }
    }
    printf("maximun is value is %d \n",max);
}