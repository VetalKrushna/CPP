#include<iostream>
using namespace std;
class add
{
    public:
    int a,b;
     add()
     {
        a=10;b=20;
     }
     add(add &ob)
     {
        cout<<"Addition="<<ob.a+ob.b;
     }
};
int main()
{
    add ob;
    add ob1(ob);
}