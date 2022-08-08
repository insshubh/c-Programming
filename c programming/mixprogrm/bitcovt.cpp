#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter the no :";
    cin>>a;
    int ans=0;
    int i=0;
    while(a!=0)
    {
        int bit =a & 1;
        ans = (bit * pow(10,i)) + ans;

        a=a>>1;
        i++;
    }
    cout<<"answer is :"<<ans<<endl;

}