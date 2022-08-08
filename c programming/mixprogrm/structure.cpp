#include<iostream>
using namespace std;
struct student
{
    int maths;
    int eng;
    int science;

};
int main()
{
    int total;
    struct student stud;
    stud.eng=75;
    stud.maths=70;
    stud.science=80;
    total=stud.eng+stud.maths+stud.science;
    cout<<"total is "<<total;

}
