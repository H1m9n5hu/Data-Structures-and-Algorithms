//Program to find LCM of two numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    cout<<"Enter two numbers a and b : ";
    cin>>a>>b;
    if(a>0 && b>0)
    {
        for(x=a>=b?a:b;x<=a*b;x++)
        if(x%a==0 && x%b==0)
            break;
        cout<<"LCM of "<<a<<" and "<<b<<" is "<<x;
    }
    else cout<<"Sorry,you entered wrong input";
    return 0;
}