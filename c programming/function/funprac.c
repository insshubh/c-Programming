#include<stdio.h>
int func1(int a){
if(a%2==0){
    printf("it is even");
}else{
    printf("it is odd");
}
return a;
}
int main()
{
    int func1 ;
    int num;
    printf(" enter the no \n");
    scanf("%d",&num);
    printf( func1(num));
    return 0;
}