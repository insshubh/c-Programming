#include <stdio.h>
int main()
{
    int num;
    printf("enter the first n num\n");
    scanf("%d", &num);

    int i = 0;
    float sum;
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }

    sum = sum / num;
    printf("the avg of n num is : %f", sum);
}