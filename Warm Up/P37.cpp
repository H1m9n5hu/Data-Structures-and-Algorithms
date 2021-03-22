// Program to print all Armstrong numbers between 1 to n.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int N, n = 0, a = 0, Sum = 0, P, temp = 0;
        cin >> N;

        for ( int j = 1; j <= N; j++ )
        {
            temp = j;
            n = floor ( log10 ( j ) + 1 );
            j = temp;
            
            while ( j )
            {
                a = j%10;
                j = j/10;
                P = 1;
                P = ( int ) pow ( a, n );
                Sum += P;
            }
            
            a = 0;
            n = 0;
            j = temp;
            
           if ( Sum == j )
                cout << j << " ";
           Sum = 0;
        }
    }
    
    return 0;
}
