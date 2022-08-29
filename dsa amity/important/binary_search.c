#include<stdio.h>
// recursive approach divide and conqueror
int binary_search(int arr[],int key,int low,int high)
{
    if(high>=low)
    {
     int mid = low +  (high + low)/2;
    
    
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<=key)
    {
        return binary_search(arr,key,mid + 1,high);
    }
    else{
        return binary_search(arr,key,low,mid-1);
      }
    }

    return -1;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key = 9;
   
    int result =(binary_search(arr,key,1,10));
    printf("%d is found at index %d",key,arr[10]);

    // iterative method
    /*if(result == -1)
    {
        printf("%d is found",key,result);
    }
    else{
        printf("not found");
    }
    */
    return 0;

}