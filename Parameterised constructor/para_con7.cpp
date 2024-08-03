#include<iostream>
using namespace std;
class Mynumber
{
    public:
    int a,b,c,d=0;
    Mynumber()
    {
        a=10;
        b=20;
        c=30;
    }
    Mynumber(int d,int a,int b,int c)
    {
        this->d=0;
     this->a=a;
     this->b=b;
     this->c=c;
    } 
      Mynumber(int a,int b=2,int c=3)
    {
     this->a=a;
     this->b=b;
     this->c=c;

    }
    void average()
    { 
        float ans=(float)(a+b+c)/3;
        cout<<"\nAverage="<<ans;
    }
};
int main()
{
    Mynumber ob;
    ob.average();
    Mynumber ob1(0,10,40,50);
    ob1.average();
    Mynumber ob2(1);
    ob2.average();
}