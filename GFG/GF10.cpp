// Program to Sort an array without using sort function
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
        int a [ N ], i, j, temp;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];

        for ( i = 0; i < N; i++ )
            for ( j = i + 1; j < N; j++ )
                if ( a [ i ] > a [ j ] )
                {
                    temp = a [ i ];
                    a [ i ] = a [ j ];
                    a [ j ] = temp;
                }

        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        cout << endl;
    }

    return 0;
} 