#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    switch(x>=0?0:1)
    {
        case 0:
            if(x==0)
              cout<<x<<" is equal to zero.";
            else
              cout<<x<<" is Positive.";
            break;
        case 1:
            cout<<x<<" is Negative.";
    }
    return 0;
}