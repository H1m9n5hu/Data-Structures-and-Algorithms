// Fair Elections
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
        int a [ N ], b [ M ];
        for ( int i = 0; i < N; i++ )
            cin >> a [ i ];
        for ( int i = 0; i < M; i++ )
            cin >> b [ i ];

        sort ( a, a + N );
        sort ( b, b + M, greater<int>() );

        int Sum_a = 0, Sum_b = 0, j = 0;
        Sum_a = accumulate ( a, a + N, Sum_a );
        Sum_b = accumulate ( b, b + M, Sum_b );

        if ( Sum_a > Sum_b )
            cout << j;
        else
        {
            for ( int i = 0; i < ( N < M ? N : M ); i++ )
            {
                Sum_a = 0;
                Sum_b = 0;
                if ( a [ i ] < b [ i ] )
                    swap ( a [ i ], b [ i ] );
                j++;
                if ( accumulate ( a, a + N, Sum_a ) > accumulate ( b, b + M, Sum_b ) )
                {
                    cout << j;
                    break;
                }
            }
            if ( accumulate ( a, a + N, Sum_a ) <= accumulate ( b, b + M, Sum_b ) )
            {
                j = -1;
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}