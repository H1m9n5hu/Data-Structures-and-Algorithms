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
        int N, a, b, c = 0, d = 0, max_a = 0 , max_b = 0;
        cin >> N;

        while ( N )
        {
            cin >> a >> b;
            c += a;
            d += b;
            if ( c > d )
            {
                max_a = max_a >= ( c - d ) ? max_a : c - d;
            }
            else
            {
                max_b = max_b >= ( d - c ) ? max_b : d - c;
            }
            N--;
        }
        
        if ( max_a > max_b )
            cout << 1 << " " << max_a << endl;
        else
            cout << 2 << " " << max_b << endl;    
    }
    
    return 0;
}