#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n>0)
    {
        cout<<"Natural numbers from 1 to "<<n<<" in reverse order are given below"<<endl;
        while(n!=0 && n>0)
        {
            cout<<n<<endl;
            n--;
        }
    }
    else
        cout<<"Sorry,you entered wrong input."<<endl<<"You can input only Natural numbers.";
    return 0;
}