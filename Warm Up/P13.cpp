#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    n>0?cout<<"Sum of all Natural numbers from 1 to "<<n<<" is "<<n*(n+1)/2:cout<<"Sorry,you entered invalid input."<<endl<<"You can enter only Natural numbers.";
    return 0;
}