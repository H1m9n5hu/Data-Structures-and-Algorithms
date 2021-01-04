// Encoded String
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
        vector <char> b = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p' }, temp_b;
        temp_b = b;
        int N, l = 0;
        string a;
        cin >> N;
        cin >> a;
        
        for ( int i = 0; i < N; i++ )
        {
            if ( a [ i ] == '0' )
            {
                l = b.size()/2;
                for ( int i = 0; i < l; i++ )
                    b.pop_back();
            }
            if ( a [ i ] == '1' )
            {
                l = b.size()/2;
                for ( int i = 0; i < l; i++ )
                    b [ i ] = b [ l + i ];
                for ( int i = 0; i < l; i++ )
                    b.pop_back();
            }
            if ( i%4 == 3 )
            {
                cout << b [ 0 ];
                b = temp_b;
                if ( i + 1 == N )
                    cout << endl;
            }
        }
    }

    return 0;
}