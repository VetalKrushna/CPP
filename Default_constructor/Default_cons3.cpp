#include<iostream>
using namespace std;
class College
{
    public:
    int rno,m[6],t=0;
    float p;
    char sname[20];
    College();
    void calculate()
 {
    for(int i=0;i<6;i++)
    {
        t=t+m[i];
    }
    p=(t/6)%100;
    cout<<"\nTotal marks:"<<t;
    cout<<"\nPercentage:"<<p;
}

};
College::College()
{
    cout<<"Enter Rno Name and Six sub marks:";
    cin>>rno>>sname;
    for(int i=0;i<6;i++)
        cin>>m[i];
}
int main()
{
    College ob;
    ob.calculate();
}