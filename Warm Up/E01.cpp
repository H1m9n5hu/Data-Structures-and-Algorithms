#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(0<=t--)
    {
        int n,q,i,j,x;
        cin>>n;
        int arr[n]={0};
        cin>>q;
        for(q;q>=1;q--)
        {
           cin>>i>>j;
           while(i<=j)
           {
               arr[i]++;
               i++;
           }
        }
        for(x=0;x<n;x++)
            cout<<arr[x]<<" ";
        cout<<endl;
    }
    return 0;
}