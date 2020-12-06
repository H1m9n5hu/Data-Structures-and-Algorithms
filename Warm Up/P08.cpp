#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=0;
    int n,x;
    cout<<"Enter a number to check that a number is prime or not : ";
    cin>>n;
    if(n>0)
    {
        for(x=2;x<sqrt(n);x++)
          if(n%x==0)
          {
              flag=1;
              break;
          }
    }
    else cout<<"Sorry,You entered wrong input."<<endl<<"You can input only natural numbers.";

    flag?cout<<n<<" is not a prime number":cout<<n<<" is a prime number";
    return 0;
}