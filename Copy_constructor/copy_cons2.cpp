#include<iostream>
using namespace std;
class add
{
    public:
    int a,b;
     add(int a,int b)
     {
        this->a=a;this->b=b;
     }
     add(add &ob)
     {
        cout<<"Addition in copy constructor ="<<ob.a+ob.b;
     }
};
int main()
{
    add ob(11,22);
    add ob1(ob);
}