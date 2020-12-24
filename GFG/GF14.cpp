// Program to Merge two sorted arrays into one sorted array
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
        int c [ N + M ];
        
        for ( i = 0; i < N + M; i++ )
        {
            if ( i < N )
               c [ i ] = a [ i ];
            else
            {
                c [ i ] = b [ j ];
                j++;
            }
        }

        sort ( c, c + ( N + M ) );

        for ( i = 0; i < N + M; i++ )
            cout << c [ i ] << " ";
        cout<<endl;
    }
    
    return 0;
}