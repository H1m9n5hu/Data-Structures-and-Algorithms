#include<bits/stdc++.h>
using namespace std;
int digits(long long x);
int main()
{
   long long int n,a[10]={0},i;
   cout<<"Find frequency of each digit in a given integer"<<endl<<"Enter any Integer : ";
   cin>>n;
   if(n<0) n=-n;
   while(n)
   {
        i=n%10;
        a[i]++;
        n=n/10;
   }
   for(n;n<10;n++)
      cout<<"Frequency of "<<n<<" is "<<a[n]<<endl;
    return 0;
}