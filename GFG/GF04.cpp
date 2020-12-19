// Find Smallest and Greatest element in an Array
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
            cin >> a[ i ];

        sort ( a, a + N );

        cout << "Smallest element in this Array is " << a [ 0 ] << endl;
        cout << "Greatest element in this Array is " << a [ N - 1 ];
        cout << endl << endl;
    }
    
    return 0;
}