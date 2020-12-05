#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;
    switch(x-y>=0?0:1)
    {
        case 0:
            if(x==y)
              cout<<"Both numbers are equal.";
            else
              cout<<x<<" is greater than "<<y;
            break;
        case 1:
            cout<<y<<" is greater than "<<x;
    }
    return 0;
}