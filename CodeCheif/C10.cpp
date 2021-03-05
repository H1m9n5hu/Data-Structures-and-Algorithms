// Chef and Groups 
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
        int i = 0, j = 0, k = 0;
        string S;
        cin >> S;

        for ( int i = 0; i < S.length(); i++ )
        {
            for ( j = i; j < S.length(); j++ )
            {
                if ( S [ j ] == '1')
                {}
                if ( S [ j ] == '0')
                    break;
            }   
            i = j;
            if ( S [ j - 1 ] == '1' )
                k += 1;
        }
        
        cout << k << endl;
    }
    
    return 0;
}