#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

	int N;
	cin >> N;
	while ( N )
	{
		int arr1 [ N ], arr2 [ N ], k;
		for ( int i = 0; i < N; i++ )
			cin >> arr1 [ i ];

		for ( int i = 0; i < N; i++ )
		{
			k = arr1 [ i ];
			arr2 [ k - 1 ] = i + 1;
		}

		bool flag = true;
		for ( int i = 0; i < N; i++ ) 
			if ( arr1 [ i ] != arr2 [ i ] )
			{
				flag = false;
				break;
			}

		if ( flag )
			cout << "ambiguous" << endl;
		else
			cout << "not ambiguous" << endl;
		
		cin >> N;
	}
	return 0;
}