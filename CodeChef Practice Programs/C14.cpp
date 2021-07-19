#include<bits/stdc++.h>
using namespace std;

int sum ( int N )
{
    int res = 0;
    for ( int i = 1; i <= N; i++ )
        res += i;
    return res;
}

int sum ( int D, int N )
{
    for ( int i = 1; i <= D; i++ )
        N = sum ( N );
    return N;
}

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t, D, N;
    cin >> t;
    
    while ( t-- )
    { 
        cin >> D >> N;

        cout << sum ( D, N ) << endl;
    }  
    
    return 0;
}