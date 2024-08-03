#include<iostream>
using namespace std;
class emp
{
    public:
    int eno,sal;
    char ename[20];
    emp();
    void disp();
};
emp::emp()

    {
        cout<<"Enter eno ename sal:";
        cin>>eno>>ename>>sal;
    }
void emp::disp()
{
    cout<<"\nEmpno:"<<eno<<"\nEmp name:"<<ename<<"\nsal:"<<sal;
}    
int main()
{
    emp ob;
    ob.disp();
}