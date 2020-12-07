#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ReverseNum(int);
    cout<<"Enter a number : ";
    cin>>n;
    n==ReverseNum(n)?cout<<n<<" is a Palindrome Number.":cout<<n<<" is not a Palindrome Number.";
    return 0;
}

int ReverseNum(int x)
{
    int n=0;
    while(x!=0)
    {
        n=n*10+x%10;
        x=x/10;
    }
    return n;
}