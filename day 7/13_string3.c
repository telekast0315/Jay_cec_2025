#include<stdio.h>
#include<string.h>
int main()
{
    char user_input[90];
    printf("entr a string");
    fgets(user_input,100,stdin);
    printf("%s",user_input);
    return 0;
}