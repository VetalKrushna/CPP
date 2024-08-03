#include<iostream>
using namespace std;
class Mypoint
{
    public:
     int x,y;
     Mypoint()
     {
        x=30;y=100;
     }
     Mypoint(Mypoint &a)
     {
        std::cout<<"Points : ("<<a.x<<","<<a.y<<")";
     }
};
int main()
{
    Mypoint ob;
    Mypoint ob1(ob);
}