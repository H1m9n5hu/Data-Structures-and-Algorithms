#include<bits/stdc++.h>
#define P 1000000007
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        long long int N,M;
        cin >> N >> M;

        long long int res = 1, a = 2;

        while ( N > 0 )
        {
            if ( N & 1 )
                res = (res * a) % P;
            a = (a * a) % P;
            N >>= 1;
        }

        int result = 1;
        res = res - 1;

        if ( res % P == 0 ) 
            cout << 0 << endl;
        else 
        {
            while ( M > 0 ) 
            { 
                if ( M & 1 ) 
                    result = ( result*res ) % P; 
                res = ( res*res ) % P; 
                M >>= 1;
            }

            cout << result << endl;
        }
    }
    
    return 0;
}