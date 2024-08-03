#include<iostream>
using namespace std;
class Myarray
{
    public:
    int a[20],n;
    Myarray(int n)
    {
        this->n=n;
        cout<<"Enter "<<n<<" elements:";
        for(int i=0;i<n;i++)
         cin>>a[i];
    }
    void disp()
    {
        
        cout<<"\nEven:";
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            cout<<a[i]<<" ";     
        }
        cout<<"\nOdd:";
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            cout<<a[i]<<" ";     
        }
    }
};
int main()
{
    Myarray ob(10);
    ob.disp();
}