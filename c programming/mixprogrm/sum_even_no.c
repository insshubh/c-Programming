#include<stdio.h>
int main()
{

  int n;
  int i = 2,sum =0;
  printf("enter the no ");
  scanf("%d",&n);
  while (i<=n)
  {
    sum=sum+i;
    i=i+2;
  }
  printf(" the sum of even no is %d",sum);


}