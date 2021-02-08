// Maximise Function
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
        long int N;
        cin >> N;
        if ( 3 <= N && N <= 100000 )
        {
            long int i = 0, x = 0, y = 0, z = 0, sum = 0;
            int a [ N ];
            for ( i; i < N; i++ )
                cin >> a [ i ];

            sort ( a, a + N, greater<int>() );
            x = a [ 0 ] - a [ N - 2 ]; y = a [ N - 2 ] - a [ N - 1 ]; z = a [ N - 1 ] - a [ 0 ];
            if ( z < 0 )
                z = -z;
            sum = x + y + z;
            
            cout << sum << endl;
        }
    }
    
    return 0;
}

