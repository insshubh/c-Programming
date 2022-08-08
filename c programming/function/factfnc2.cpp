#include<iostream>
using namespace std;
int factorial (int a){

    int fact =1;
    for(int i =1;i<=a;i++){
    fact=fact*i;
    
    }
    return fact;
}


    int ncr(int n,int r){
    int num = factorial(n);
    int denm =factorial(r)*factorial(n-r);
    int ans = num/denm;
    return ans;

}
int main()
{
    int a ,b;
    cout<<"enter the no"<<endl;
    cin>>a>> b;
    cout<<"ncr of a and b is:"<<ncr(a,b);
    return 0;
}
    