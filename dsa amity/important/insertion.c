#include<stdio.h>
void display(int arr[],int n)
{
    for(int i =0;i<=n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("   ");
}
int insertionnum(int arr[],int size, int element,int index,int capacity)
{
    for(int i = size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[ index ] = element;
    return 1;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6};
    int size=6;
    display(arr,6);
    printf("after insertion \t");
    insertionnum(arr,size,45,3,10);
    size+=1;
    display(arr,6);
    return 0;
    

}