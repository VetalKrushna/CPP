#include<iostream>
#include<string.h>
using namespace std;
class Emp
{
    public:
    int eno,sal;
    char ename[20];
     Emp(int eno,char ename[20],int sal)
     {
        this->eno=eno;
        strcpy(this->ename,ename);
        this->sal=sal;
     }
     void disp()
     {
      cout<<"\nEmp no"<<eno<<"\nName:"<<ename<<"\nsal:"<<sal;
     }
};
int main()
{
   Emp ob(10,"Om",50000);
   ob.disp();
}