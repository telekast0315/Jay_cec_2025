#include<stdio.h>

int add(int a,int b);
int add(int a,int b)
{
    return a+b;
}
int main(int argc, char const *argv[])
{
    printf("the sum is\n%d\n%d\n%d\n",add(4,5),add(10,9),add(55,45));

    return 0;
}
 