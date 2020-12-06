#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n>0)
    {
        cout<<"Multiplication table of "<<n<<" is given below"<<endl;
        for(i=1;i<=10;i++)
           cout<<i*n<<endl;
    }
    else
        cout<<"Sorry,you entered invalid input."<<endl<<"You can enter only Natural numbers.";
    return 0;
}