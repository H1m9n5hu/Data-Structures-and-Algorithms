// Find the Smallest and Greatest element in an Array(My Logic)
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
        int a [ N ], b [ N ], i, j, s;
        for ( i = 0; i < N; i++ )
        {
            cin >> a[ i ];
            b [ i ] = a [ i ];
        }

        j = a [ 0 ];
        s = b [ 0 ];
        for ( i = 1; i < N; i++ )
        {
            j = j < a [ i ] ? j : a [ i ];
            s = s > b [ i ] ? s : b [ i ];
        }
        cout << "Smallest element in this Array is " << j << endl;
        cout << "Greatest element in this Array is " << s;

        cout << endl << endl;
    }
    
    return 0;
}