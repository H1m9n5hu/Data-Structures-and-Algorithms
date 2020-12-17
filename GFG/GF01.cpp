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
        int N,temp;
        cin >> N;
        temp = N;

        int a [ N ], i, j;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];
        
        for ( i = 0; i < N; i++ )
        {
            j = a [ i ];
            a [ i ] = a [ --N ];
            a [ N ] = j;
        }

        for ( i = 0; i < temp; i++ ) 
            cout << a [ i ] << " ";
        
        cout << endl;
    }

    return 0;
}