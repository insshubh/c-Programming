#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("Enter the value of m \n");
    scanf("%d",&m);
    printf("Enter the value of n \n");
    scanf("%d",&n);
    int i = m;

    for (i; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}