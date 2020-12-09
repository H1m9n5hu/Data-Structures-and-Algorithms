//Program to find all factors of a number
#include<bits/stdc++.h>
using namespace std;

int factor(int n,int i)
{
    n=n/i;
    cout<<i<<" ";
    return n;
}

int main()
{
    int n,i=2;
    int factor(int,int);
    cout<<"Enter a number : ";
    cin>>n;
    if(n!=0)
    {
        cout<<"Factors of "<<n<<" are 1 ";
        while(n!=1)
          n%i==0?(n=factor(n,i)):i++;
    }
    else cout<<"You can't enter 0.";
    return 0;
}