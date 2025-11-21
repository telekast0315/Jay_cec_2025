#include <stdio.h>
int main()
{
    char ch;
    int Ascii;
    printf("enter the character:");
    scanf("%c", &ch);
    printf("Ascii value = %d:", ch);
    Ascii=ch;
    if (Ascii >= 65 && Ascii <= 90)
    {
        printf("the character is upper case");
    }

    else
    {
        printf("the character is lower case");
    }
    return 0;
}