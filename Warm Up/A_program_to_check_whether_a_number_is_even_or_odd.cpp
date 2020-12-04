#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    switch(x%2==0?0:1)
    {
        case 0:
            cout<<x<<" is a Even number.";
            break;
        case 1:
            cout<<x<<" is a Odd number.";
    }
    return 0;
}