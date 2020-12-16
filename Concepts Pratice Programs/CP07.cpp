// Program to Pair Sum XOR of an Array
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

        int a [ N ], i, j = 0;
        for( i = 0; i < N; i++ )
            cin >> a [ i ];

        for( i = 0; i < N; i++ )
            a [ i ] = 2 * a [ i ];

        for ( i = 0; i < N; i++ )
            j = a [ i ] ^ j;

        cout << j;

        cout << endl;
    }
    
    return 0;
}