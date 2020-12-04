#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cout<<"Enter a number to check that a number is prime or not : ";
    cin>>n;
    if(n>0)
    {
        for(x=2;x<n;x++)
          if(n%x==0)
            break;
    }
    else
        cout<<"Sorry,You entered wrong input."<<endl<<"You can input only natural numbers.";
    if(n>0)
        x==n?cout<<n<<" is a prime number.":cout<<n<<" is not a prime number.";
    return 0;
}