// Program to Cyclically rotate an array by one
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
        int a [ N ], i, j;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];

        j = a [ 0 ];
        for ( i = 0; i < N; i++ )
        {
            if ( i == 0 )
                a [ i ] = a [ N - 1 ];
            else
            {
                a [ N - 1 ] = a [ i ];
                a [ i ] = j;
                j = a [ N - 1 ];
            }
        }

        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        cout << endl;
    }

    return 0;
} 