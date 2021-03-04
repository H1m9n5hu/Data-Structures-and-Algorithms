// Program to find sum of all prime numbers between 1 to n.
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
        int n, sum = 0;
        cin >> n;
        
        for ( int i = 1; i <= n; i++ )
        {
            int k = 0;
            for ( int j = 1; j <= i; j++ )
                if ( i%j == 0 )
                    k++;
            if ( k == 1 || k == 2 )
                sum += i;
        }

        cout << sum << endl;
    }
    
    return 0;
}