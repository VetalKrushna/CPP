#include<iostream>
using namespace std;
class Myarray
{
    public:
    int i,j,a[10][10],s=0,m,n;
     Myarray(int m,int n)
     {
        this->m=m;this->n=n;
        cout<<"Enter elements:";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
     }
     void sum()
      {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                s=s+a[i][j];
            }
        }
        cout<<"\nSum of element:"<<s;
      }
};
int main()
{
    int m,n;
    cout<<"Enter rows and cols:";
    cin>>m>>n;
    Myarray ob(m,n);
    ob.sum();
}