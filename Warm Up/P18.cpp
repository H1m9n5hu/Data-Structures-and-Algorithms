#include<bits/stdc++.h>
using namespace std;

int digits(long long x);
int main()
{
    long long int n,i=0,x;
    cout<<"Enter a number : ";
    cin>>n;
    x=n;
    while(x!=0)
    {
        i=i+x%10;
        x=x/10;
    }
    i>=0?cout<<"Sum of all digits of "<<n<<" is "<<i<<".":cout<<"Sum of all digits of "<<n<<" is "<<-i<<".";
    return 0;
}