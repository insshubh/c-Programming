#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            sum = sum + 1;
    }
    if (sum == 2)
    {
        printf("the input is a prime no\n");
    }
    else
    {
        printf("it is a composite number\n");
    }
    return 0;
}