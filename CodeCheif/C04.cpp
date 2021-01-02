// Chef and Division 3
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
        long int N, K, D;
        cin >> N >> K >> D;
        int a [ N ], Sum = 0;
        for ( int i = 0; i < N; i++ )
            cin >> a [ i ];

        for ( int i = 0; i < N; i++ )
            Sum += a [ i ];

        if ( Sum/K <= D )
            cout << Sum/K;
        else
            cout << D;
        cout << endl;
    }

    return 0;
}