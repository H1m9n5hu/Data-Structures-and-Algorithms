#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int t;
    cin >> t;

    while ( t-- )
    {
        int N, p = 1, k, r;
        long long int X;
        cin >> N >> X;
        long long int a [ N ], b [ N ];
        for ( k = 1; k <= N; k++ )
        {
            cin >> a [ k ];
            b [ k ] = a [ k ];
        }

        r = pow ( 2, p);
        if ( N > 1 )
        {
            a [ 1 ] = a [ 1 ] ^ r;
            a [ 2 ] = a [ 2 ] ^ r;
                
            if ( a [ 1 ] < b [ 1 ] )
                for ( k = 1; k <= N; k++ )
                    cout << a [ k ] << " ";
            else
            {
                if ( b [ 1 ] < a [ 1 ] )
                    for ( k = 1; k <= N; k++ )
                        cout << b [ k ] << " ";
                else
                {
                    if ( a [ 2 ] < b [ 2 ] )
                        for ( k = 1; k <= N; k++ )
                            cout << a [ k ] << " ";
                    else                      
                        for ( k = 1; k <= N; k++ )
                            cout << b [ k ] << " ";
                }
            }     
        }
    }

    return 0;
}