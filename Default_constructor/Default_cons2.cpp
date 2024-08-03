#include<iostream>
using namespace std;
class Area
{
    public:
     float a,r;
    Area();
};
Area::Area()
{
    cout<<"Enter radius:";
    cin>>r;
   cout<<"Area:"<<3.14*r*r;
}
int main()
{
    Area ob;
}