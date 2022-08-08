#include<iostream>
using namespace std;
int cube(int x)
{
    x=x*x*x;
    return(x);
}
int main()
{
int n;
cout<<"enter the no";
cin>>n;
cout<<"cube of no :"<<cube(n);
return 0;
}