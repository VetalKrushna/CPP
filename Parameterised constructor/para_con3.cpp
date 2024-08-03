#include<iostream>
#include<string.h>
using namespace std;
class Mydate
{
    public:
    int dd,mm,yyyy;
    char m[20];
    Mydate(int dd,int mm,int yyyy)
     {
        this->dd=dd;
        this->mm=mm;
        this->yyyy=yyyy;
     }
     void disp()
     {
        switch(mm)
        {
            case 01:strcpy(m,"Jan");break;
            case 02:strcpy(m,"Feb");break;
            case 03:strcpy(m,"Mar");break;
            case 04:strcpy(m,"Apr");break;
            case 05:strcpy(m,"May");break;
            case 06:strcpy(m,"June");break;
            case 07:strcpy(m,"July");break;
            case 8:strcpy(m,"Aug");break;
            case 9:strcpy(m,"Sept");break;
            case 10:strcpy(m,"Oct");break;
            case 11:strcpy(m,"Nov");break;
            case 12:strcpy(m,"Dec");break;
        }
        cout<<"\nDate :"<<dd<<"-"<<m<<"-"<<yyyy;
     }
};
int main()
{
    int d,m,y;
    cout<<"Enter date in dd-mm-yyyy:";
    cin>>d>>m>>y;
    Mydate ob(d,m,y);
    ob.disp();
}