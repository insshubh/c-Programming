 #include <iostream>
 using namespace std;

 int main() {
//cout << "Enter the 2 * 2 matrix element for matrix one --> " ;
        int i ,j;
    int arr1[2][2];
     int arr2[2][2];
    cout<<"enter the elements of arr1 "<<endl;
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    cin>>arr1[i][j];

     cout<<"enter the elements of arr2 "<<endl;
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    cin>>arr2[i][j];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<arr1[i][j] - arr2[i][j]<<" ";
        }
        cout<<endl;

    }

    }

 