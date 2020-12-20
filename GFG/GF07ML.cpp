// Program to Move all negative numbers to beginning and positive to end with constant extra space ( My Logic )

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
        int a [ N ], i;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];

        sort ( a, a + N );

        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        
        cout << endl;
    }
    
    return 0;
}