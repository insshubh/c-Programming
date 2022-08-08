#include<stdio.h>
int main()
{
    int a, b, c;
    printf(" enter no 1 : ");
    scanf("%d", &a); 

    printf(" enter no 2 : ");
    scanf("%d", &b);


    printf(" enter no 3 : ");
    scanf("%d", &c);

    int sum;
    sum = a+b+c;
    printf(" average of 3 numbers are = %d", sum/3);
    return 0;

}