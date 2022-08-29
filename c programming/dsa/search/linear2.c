#include <stdio.h>
int main()
{
    int search;
    printf("enter the no to search\n");
    scanf("%d", &search);
    int arr[10] = {
        12,
        13,
        15,
        16,
        18,
        19,
        10,
        34,
        17,
        18,
    };

    for (int i = 0; i < arr[10]; i++)
    {
        if (search == arr[i])
        {
            printf("%d is in list\n", search, arr[i]);
            printf("%d is the index", i);
            break;
        }
    }
}