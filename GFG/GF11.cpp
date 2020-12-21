// Program to Sort an array of 7s, 9s and 17s
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
        int a [ N ], i;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];
        
        int c0 = 0, c1 = 0, c2 = 0;

        for ( i = 0; i < N; i++ ) 
        {
            if ( a [ i ] == 7 )
                c0++;
            else if ( a [ i ] == 9 )
                c1++;
            else c2++;
        }

        int k = 0;

        for ( i = 0; i < c0; i++ ) a [ k++ ] = 7;
        for ( i = 0; i < c1; i++ ) a [ k++ ] = 9;
        for ( i = 0; i < c2; i++ ) a [ k++ ] = 17;

        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        cout << endl;
    }

    return 0;
} 