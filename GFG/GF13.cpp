// Program to Find largest Sum of Contiguous Subarray by Kadane's Algorithm
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
        int a [ N ], i, ans = INT_MIN, sum = 0;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];
        
        for ( i = 0; i < N; i++ )
        {
            sum = sum + a [ i ];
            if ( sum < a [ i ] ) sum = a [ i ];
            if ( ans < sum ) ans = sum;
        }

        cout << "Largest Sum of Contiguous Subarray is " << ans << ".";
        cout<<endl;
    }
    
    return 0;
}