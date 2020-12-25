// Program to Print all the duplicates in the input string
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
        string S, s;
        getline ( cin, S );
        cin >> S;
        int N, i, j, k = 0;
        N = S.size();

        for ( i = 0; i < N; i++ ) 
        {
           for ( j = 0; j < N; j++ )
               if ( S [ i ] == S [ j ] )
                   k++;
           if ( k > 1 )
           {
               if ( s.find ( S [ i ] ) != string :: npos )
               {
               }
               else
               {
                   cout << S [ i ] << " -> " << k << endl;
                   s = s + S [ i ];
               }
            }
            k = 0;
        }
    }

    return 0;
} 