#include <iostream>
using namespace std;
int main()
 {  
     int a, b, c, d;  
     cout<<"Enter a and b: ";  
     cin>>a>>b; 
     cout<<"Enter c and d: "; 
     cin>>c>>d;
     float ans = (a/b)+(c/d);  
     cout<<"Answer( not typecast) = "<<ans<<"\n";  
     ans = ((float)a/b)+((float)c/d);  
     cout<<"Answer(with typecast) = "<<ans<<"\n"; 
     return 0;
     }