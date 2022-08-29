#include<stdio.h>
int even_odd(int num)
{
    if(num%2==0)
    {
        printf("the input  is even\n");
    }
    else{
        printf("Input  is odd\n");
    }
    return even_odd;
}
int main()
{
    int num;
    printf("Enter the input \n");
    scanf("%d",&num);
    printf(even_odd(num));
    return 0;
}