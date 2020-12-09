//Program to find HCF of two numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    cout<<"Enter two numbers a and b : ";
    cin>>a>>b;
    if(a>0 && b>0)
    {
        for(x=a<=b?a:b;1<=x;x--)
        if(a%x==0 && b%x==0)
            break;
        cout<<"HCF of "<<a<<" and "<<b<<" is "<<x;
    }
    else cout<<"Sorry,you entered wrong input";
    return 0;
}