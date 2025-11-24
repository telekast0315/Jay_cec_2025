#include <stdio.h>
int main()
{
    int num, duplicate, reverse = 0, digit = 0;
    printf(" enter the num ");
    scanf("%d", &num);
    duplicate = num;
    while (num != 0)

    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;

        num = num / 10;
    }

    if (duplicate == reverse)
    {
        printf("PALINDROM   \n");
    }
    else
    {
        printf("NOT A PALINDROM \n ");
    }
}
