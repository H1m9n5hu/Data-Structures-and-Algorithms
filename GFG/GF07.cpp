// Program to Move all negative numbers to beginning and positive to end with constant extra space

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
        int N;
        cin >> N;
        int a [ N ], b [ N ], i, j = 0;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];

        for ( i = 0; i < N; i++ )
        {
            if ( a [ i ] < 0 )
            {
                b [ j ] = a [ i ];
                j++;
            }
        }

        for ( i = 0; i < N; i++ )
        {
            if ( a [ i ] >= 0 )
            {
                b [ j ] = a [ i ];
                j++;
            }
        }

        for ( i = 0; i < N; i++ )
            a [ i ] = b [ i ];

        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        
        cout << endl;
    }
    
    return 0;
}