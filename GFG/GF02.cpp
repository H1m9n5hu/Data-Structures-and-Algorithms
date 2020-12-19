// Find "Kth" smallest element of an Array
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
        int a [ N ], i, k;
        for ( i = 0; i < N; i++ )
            cin >> a[ i ];
        cin >> k;
        
        sort ( a, a + N );

        for ( i = 1; i <= N; i++ )
            if ( i == k )
                break;
        cout << k << "th smallest element is " << a [ k -1 ];
        cout << endl;
    }
    
    return 0;
}