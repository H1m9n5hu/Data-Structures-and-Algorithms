//Program to find all factors of a number by while loop
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
            if(n%i==0)
            {
                n=n/i;
                cout<<i<<" ";
            }
            else i++;
        }
    }
    else cout<<"You can't enter 0.";
    return 0;
}