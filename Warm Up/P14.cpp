#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,i;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n>0)
    {
       for(i=1;i<=n;i++)
          if(i%2==0)
             sum+=i;
       cout<<"Sum of all Even numbers from 1 t0 "<<n<<" is "<<sum;
    }
    else
        cout<<"Sorry,you entered invalid input."<<endl<<"You can enter only Natural numbers.";
    return 0;
}