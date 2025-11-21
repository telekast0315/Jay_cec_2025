#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number");
    scanf("%d", &num);
    int i =1;
   do
  
    {
        printf("%d   \n",i);
        i++;
    } while(i <= num);

}