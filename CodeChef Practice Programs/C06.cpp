#include<bits/stdc++.h>
using namespace std;

int func ( int N )
{
    int result = 0;
    while ( N )
    {
        if ( N%10 == 4 )
            result++;
        N = N/10;
    }
    return result;
}

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

        int array [ N ];
        for ( int i = 0; i < N; i++ )
            cin >> array [ i ];
        
        int result = 0;
        for ( int i = 0; i < N; i++ )
        {
            result = func ( array [ i ] );
            cout << result << endl;
        }
    }
    
    return 0;
}