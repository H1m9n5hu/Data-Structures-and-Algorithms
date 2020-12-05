#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter the month and year : ";
    cin>>x>>y;
    z=x;
    if(x==4 || x==6)
      x+=5;
    switch((1<=x && x<=3)?x:840%x==0?5:4)
    {
        case 1:
            cout<<"Total number of days in first month are 31";
            break;
        case 2:
            if(y%4==0)
            {
                cout<<"Total number of days in second month are 29";
                break;
            }
            else
            {
                cout<<"Total number of days in second month are 28";
                break;
            }
            
        case 3:
            cout<<"Total number of days in third month are 31";
            break;
        case 4:
            cout<<"Total number of days in "<<z<<"th month are 30";
            break;
        case 5:
            cout<<"Total number of days in "<<x<<"th month are 31";
            break;
    }
    return 0;
}