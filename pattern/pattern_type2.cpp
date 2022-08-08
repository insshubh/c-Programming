#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the no to start"<<endl;
    cin>>n;


    int row=1, count = 1;
    while (row<=n)
    {
        int col = 1;
        while(col <= n) 
        {
            cout << count << " ";
            
            count ++;
            col++;
        }
        cout << endl;
        row++;
    }           
       

}