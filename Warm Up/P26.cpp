//Program to calculate factorial of a number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fact=1,temp;
    cout<<"Enter the Positive Integer : ";
    cin>>n;
    temp=n;
    for(n;1<n;n--)
        fact=fact*n;
    n>0 ? cout<<"Factorial of "<<temp<<" is "<<fact : n==0?cout<<"Factorial of 0 is 1.":cout<<"You entered wrong input." ;
    return 0;
}