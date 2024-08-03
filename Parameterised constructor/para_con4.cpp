#include<string.h>
#include<iostream>
using namespace std;
class Student
{
    public:
    int rno,n,m[10];
    char name[20];
     Student(int rno,char name[10],int n)
     {
        this->rno=rno;
        this->n=n;
        strcpy(this->name,name);
       cout<<"\nEnter "<<n<<" subject marks:";
       for(int i=0;i<n;i++)
         cin>>m[i] ;    
     }
     void disp()
     {
        cout<<"\nStudent Rno:"<<rno<<"\nName:"<<name;
        cout<<"\nMarks:";
        for(int i=0;i<n;i++)
         cout<<m[i]<<" ";
     }

};
int main()
{
    int rno,n;
    char name[29];
    cout<<"\nEnter Student rno name and sub limit:";
    cin>>rno>>name>>n;
    Student ob(rno,name,n);
    ob.disp();


}