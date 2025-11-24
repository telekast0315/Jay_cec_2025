#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
     sum+=i;
     i++;
    }
    
    printf("sum is : %d",sum);
}