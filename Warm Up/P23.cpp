//Program to find power of a number using for loop.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,ans=1;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of Power n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
        ans=ans*x;
    cout<<n<<" Power of "<<x<<" is "<<ans<<".";
    return 0;
}