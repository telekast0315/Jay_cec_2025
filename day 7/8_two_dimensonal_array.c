#include <stdio.h>
int main()
{
    int marks[2][2];
    marks[0][0] = 30;
    marks[1][0] = 20;
    marks[0][1] = 90;
    marks[1][1] = 70;
    printf("1st marks:%d\n", marks[0][0]);
    printf("2nd marks:%d\n", marks[1][0]);
    printf("3rd marks:%d\n", marks[0][1]);
    printf("4th marks:%d\n", marks[1][1]);
    printf("size of arrray: %d\n",sizeof(marks));
    printf("lenght of the array:%d \n",(sizeof(marks)/sizeof(marks[0])));
}