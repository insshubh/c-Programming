#include<stdio.h>
int main()
{
  int n,sum =0 , i=1;
  printf("enter the no");
  scanf("%d",&n);

  while(i<=n){
  sum=sum+i;
  i++;
  }

  printf("the sum is %d", sum);
  
}