//Program to find all factors of a number by switch case
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"Enter a number : ";
    cin>>n;
    if(n!=0)
    {
        cout<<"Factors of "<<n<<" are 1 ";
        while(n!=1)
        {
            switch(n%i==0)
            {
                case 0:
                   i++;
                   break;
                case 1:
                   n=n/i;
                   cout<<i<<" ";
            }
        }
    }
    else cout<<"You can't enter 0.";
    return 0;
}