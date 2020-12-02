#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,y;
    cout<<"Enter the month and year : ";
    cin>>m>>y;
    switch(m)
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
            cout<<"Total number of days in fourth month are 30";
            break;
        case 5:
            cout<<"Total number of days in fifth month are 31";
            break;
        case 6:
            cout<<"Total number of days in sixth month are 30";
            break;
        case 7:
            cout<<"Total number of days in seventh month are 31";
            break;
        case 8:
            cout<<"Total number of days in eighth month are 31";
            break;
        case 9:
            cout<<"Total number of days in nineth month are 30";
            break;
        case 10:
            cout<<"Total number of days in tenth month are 31";
            break;
        case 11:
            cout<<"Total number of days in eleventh month are 30";
            break;
        case 12:
            cout<<"Total number of days in twelfth month are 31";
            break;
        default:
            cout<<"Sorry,you entered wrong input";
    }
    return 0;
}