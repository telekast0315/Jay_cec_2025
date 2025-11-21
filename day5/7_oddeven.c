#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    if (a & 2 == 0)
    {
        printf("the give num is even");
    }
    else
    {
        printf("the give num is odd");
    }
    return 0;
}