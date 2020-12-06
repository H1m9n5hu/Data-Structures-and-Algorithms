#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,x;
    cout<<"Enter a number : ";
    cin>>n;
    x=n;
    while(x!=0)
    {
        i=x%10;
        x=x/10;
        if(x==0)
            cout<<"First digit of "<<n<<" is "<<i<<" and ";
    }
    cout<<"Last digit is "<<n%10<<".";
    return 0;
}