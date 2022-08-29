#include<stdio.h>
int main()
{
    int array[20],search,num;
    printf("Enter the no of elements");
    scanf("%d",&num);
   
     printf("%d elements of araay is : \n",num);
     for(int i =0;i<num;i++)
     {
        scanf("%d",&array[i]);
     }
     printf("enter the no to search \n");
     scanf("%d",&search);
     for(int i =0;i<num;i++)
     {
        if(array[i]==search)
        {
            printf("%d is present at location %d.\n",search,array[num]+1);
            break;
        }
        if(i==num)
        {
            printf("%d is not there\n",search);
        }
     }
     return 0;

}