// Program to print all Prime numbers between 1 to n
#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=0;
    int n,x,i;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>0)
    {
        cout<<"Prime numbers between 1 to "<<n<<" are "<<endl;
        for(i=1;i<=n;i++)
        {
            for(x=2;x<i;x++)
                if(i%x==0)
                    break;
            if(x==i)
                cout<<i<<endl;
        }
    }
    else cout<<"Sorry,You entered wrong input."<<endl<<"You can input only natural numbers.";
    return 0;
}