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
    }
    (n%10)+i>=0?cout<<"Sum of first and last digit of "<<n<<" is "<<((n%10)+i)<<".":cout<<"Sum of first and last digit of "<<n<<" is "<<-((n%10)+i)<<".";
    return 0;
}