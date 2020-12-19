// Generate all rotations of a given string
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
        int n;
        cin >> n;
        int i, j, k, l;
	    char s [ n ]; 
        for ( i = 0; i < n; i++ )
            cin >> s [ i ];
  	    char a [ n ][ n ];

  	    for ( j = 0; j < n; j++ )
        {
		    for ( i = j; i < n; i++ )
        	    a [ j ][ i ] = s [ i ];
      
      	    k = j;
      	    for ( i = 0; i < n; i++ )
            {
                a [ j ][ i ] = a [ j ][ k ];
                k++;
            }

      	    k = n - j;
   		    l = 0;
      	    for ( i = k; i < n; i++ )
            {
                a [ j ][ i ] = s [ l ];
                l++;
            }

      	    for ( i = 0; i < n; i++ )
      		    cout << a [ j ][ i ];

      	    cout << endl;
        }

        cout << endl;
    }
    
    return 0;
}