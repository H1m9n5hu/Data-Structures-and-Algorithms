// Program to print all Strong Numbers between 1 to n.
#include<bits/stdc++.h>
using namespace std;

int fact ( int a )
{
    return a >= 2 ? a*fact( a - 1 ) : 1;
}

void strong ( int i )
{
    int temp = 0, a = 0, Sum = 0;
    temp = i;

    while ( i )
    {
        a = i%10;
        i = i/10;
        Sum += fact ( a );
    }
    
    if ( Sum == temp && Sum != 0 )
        cout << temp << " ";
}

int main()
{ 
    int N;
    cout << "Enter a Number : " ;
    cin >> N;

    cout << "Strong Numbers between 1 to " << N << " are : ";
    for ( int i = 1; i <= N; i++ )
        strong ( i );
    
    return 0;
}