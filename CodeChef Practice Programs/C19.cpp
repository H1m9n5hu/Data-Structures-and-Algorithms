#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

	int t, N;
	cin >> t;

	while ( t-- )
	{
	    cin >> N;
		int array [ N ];
		for ( int i = 0; i < N; i++ )
			cin >> array [ i ];

		// First way to do this question...
		// int min_a = array [ 0 ], min_b = array [ 0 ], j;
		// for ( int i = 0; i < N; i++ )
		// 	if ( min_a > array [ i ] )
		// 	{
		// 		min_a = array [ i ];
		// 		j = i;
		// 	}
		// for ( int i = 0; i < N; i++ )
		// 	if ( min_b > array [ i ] && array [ i ] != array [ j ] )
		// 		min_b = array [ i ];
		// cout << min_a + min_b << endl;

		// Second way to do this question...
		sort ( array, array + N );
		cout << array [ 0 ] + array [ 1 ] << endl;
	}
	return 0;
}