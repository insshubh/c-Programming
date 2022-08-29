#include<iostream>

using namespace std;
class animal
{
private:
    char name[20];
public:
void aquatic()
{
    cout<<"enter the aquatic animal name"<<endl;
    cin>>name;
    cout<<"They live under water "<<endl;
    cout<<"They also maintain the nature"<<endl;
}
void landanimal()
{
    cout<<"Enter the name of animal"<<endl;
    cin>>name;
    cout<<"they live on the land "<<endl;
    cout<<"They also provide meat forn human survival"<<endl;
}


};
int main()
{
    
    animal anl;
    anl.aquatic();
    anl.landanimal();
    return 0;
}