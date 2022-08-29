#include<iostream>
using namespace std;
class teacher
{
    private :
    char name[20];
    char subject[20];
     public :
     void getdata()
     {
        cout<<"Enter the name and Subject  :"<<endl;
        cin>>name>>subject;
     }
     void putdata()
     {
        cout<<"Name is :"<<name<<endl;
        cout<<"Subject he teach is :"<<subject<<endl;
        cout<<"He is the best in his field";
     }

};
int main()
{
teacher t1;
t1.getdata();
t1.putdata();
return 0;
}
