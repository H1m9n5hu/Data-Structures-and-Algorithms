// Program to check whether a number is Perfect number or not.
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

        for ( int i = 1; i < N; i++ )
            if ( N%i == 0 )
                Sum += i;

        if ( Sum == N )
            cout << N << " is a Perfect Number." << endl;
        else
            cout << N << " is not a Perfect Number." << endl;
    }
    
    return 0;
}