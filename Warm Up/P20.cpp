#include<bits/stdc++.h>
using namespace std;

int digits(long long x);
int main()
{
    long long int n,i=1,x;
    cout<<"Enter a number : ";
    cin>>n;
    x=n;
    n>=0?cout<<"Reverse of "<<n<<" is ":cout<<"Reverse of "<<n<<" is -";
    while(x!=0)
    {
        i=x%10;
        i>=0?cout<<i:cout<<-i;
        x=x/10;
    }
    return 0;
}