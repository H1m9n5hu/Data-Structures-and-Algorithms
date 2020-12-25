// Program to Print all the duplicates in the input string with O(n) complexity
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
        string S;
        getchar();
        getline ( cin, S );
        int N, i, j = 1;

        sort ( S.begin(), S.end() );

        for ( i = 0; i < S.size(); i++ ) 
        {
           if ( S [ i ] == S [ i + 1 ] ) j++;
           else
           {
               if ( j > 1 )
                {
                    cout << S [ i ] << " -> " << j << endl;
                    j = 1;
                }
            }
        }
    }

    return 0;
} 