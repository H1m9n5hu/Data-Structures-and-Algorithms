// Program to Merge two sorted arrays into one sorted array by optimised way and without using any extra space
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
        int N, M;
        cin >> N >> M;
        int a [ N ], b [ M ], i, j = 0;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];
        for ( i = 0; i < M; i++ )
            cin >> b [ i ];
        
        i = N - 1;
        while ( i >= 0 and j < M )
        {
            if ( a [ i ] > b [ j ] )
                swap (a [ i ], b [ j ] );
            i--;
            j++;
        }
        sort ( a, a + N );
        sort ( b,b + M );

        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        for ( i = 0; i < M; i++ )
            cout << b [ i ] << " ";
        cout<<endl;
    }
    
    return 0;
}