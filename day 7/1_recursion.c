#include <stdio.h>
void print(int n);

int main()
{
    int num ;
    printf("enter a vlaue:");
    scanf("%d", &num);
    print(num);
}
void print(int n)
{
    if (n <= 0)
    {
        return;
    }
    printf("%d", n);
    print(n - 1);
}
