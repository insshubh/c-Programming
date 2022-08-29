#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define MAX 5

void insert(int *, int pos, int num);
void del(int *, int pos);
void reverse(int *);
void dispaly(int *);
void search(int *, int num);

int main()
{
    int arr[5];

    insert(arr, 0, 11);
    insert(arr, 2, 12);
    insert(arr, 3, 13);
    insert(arr, 4, 14);
    insert(arr, 1, 15);
    printf("elements of an array:\n");
    dispaly(arr);
}