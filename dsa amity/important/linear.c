#include<stdio.h>
int linear_search( int arr[],int num,int key) 
{
    for(int i=0;i<num;i++)
    {
        if(key==arr[i])
        {
            printf("key is found in array\n");
        }
    }
    return linear_search;
}
int main()
{
     int arr[10]={1,2,3,4,5,6,7,8,9,10};
     int key = 9;
     printf(binary_search(arr,10,key));
     
    return 0;
}