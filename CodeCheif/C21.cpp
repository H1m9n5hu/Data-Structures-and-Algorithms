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
        int k;
        cin >> k;

        int no_of_terms = 2*k + 1;
        int array [ no_of_terms ];
        int sum = 0;

        for ( int i = 1; i <= no_of_terms; i++ )
        {
            array [ i - 1 ] = k + i*i;
        }

        for ( int i = 0; i < no_of_terms - 1; i++ )
        {
            int x = array [ i ], y = array [ i + 1 ];
            for ( int j = x; j >= 1; j-- )
            {
                if ( x%j == 0 && y%j == 0 )
                {
                    sum += j;
                    break;
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}
