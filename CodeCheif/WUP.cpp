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
        int N, Sum = 0;
        cin >> N;

        for ( int i = 0; i < N; i++ )
            if ( N%i == 0 )
                Sum += i;
        cout << Sum << endl;
        if ( Sum == N )
            cout << N << " is a Perfect Number." << endl;
        else
            cout << N << " is not a Perfect Number.";
    }
    
    return 0;
}