// Program to check that a number is a power of two or not
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
        int N , Q;
        cin >> N;
        int a [ N ], pre [ N ], i, j;
        for( i = 0; i < N; i++ )
            cin >> a [ i ];
        cin >> Q;
        pre [ 0 ] = a [ 0 ];
        for ( i = 1; i < N ; i++ )
            pre [ i ] = pre [ i - 1 ] ^ a [ i ];
        for ( i = 0; i < N; i++ )
            cout << pre [ i ] << " ";

        cout << endl;
    }
    
    return 0;
}