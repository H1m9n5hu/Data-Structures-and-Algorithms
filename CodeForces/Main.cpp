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
        int N, i, j = 1, temp;

        cin >> N;
        int a [ N ], b [ N ] = { 0 };
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];
        temp = N;
        
        b [ 0 ] = a [ 0 ];
        for ( i = 1; i < 6; i++ )
        {
            b [ i ] = a [ N - 1 ];
            N--;
            i++;
            b [ i ] = a [ j ];
            j++;
        }

        for ( i = 0; i < temp; i++ )
            cout << b [ i ] << " ";
        cout << endl;
    }

    return 0;
}