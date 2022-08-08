#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" ENTER THE SERIES NO :";
    cin>>n;
    int a = 0 , b = 1;

    cout<<"FIBONACCI SERIES :"<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++){

        int nxtfib = a+b;
        cout<<nxtfib<<" ";
        a=b;
        b=nxtfib;
    }
}