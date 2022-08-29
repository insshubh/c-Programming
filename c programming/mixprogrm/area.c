#include <stdio.h>
int main()
{
    int num;
    printf("enter the no\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the no is even\n");
    }
    else
    {
        printf("the no is odd");
    }
    return 0;
}