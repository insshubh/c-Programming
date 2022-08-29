#include<stdio.h>
#include<conio.h>
char vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch =='i' || ch =='o' || ch =='u')
    {
        printf("Input is vowel\n");
    }
    else {
        printf("Input is consonant\n");
    }
    return vowel;
}
int main()
{
    system("cls");
    char in;
    printf("enter the alphabets\n");
    scanf("%c",&in);
    printf(vowel(in));
    
    return 0;
    
    
    
    
}