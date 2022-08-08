#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no "<<endl;
    cin>>n;

    int row = 1;

    while(row<=n){

          int col =1;
          while(col<=n){
          cout<<n-col+1;
          col=col+1;
          }
          cout<<endl;
          row=row+1;

    }
}