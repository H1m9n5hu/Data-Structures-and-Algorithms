#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t, N;
	cin >> t;

	while ( t-- )
	{
	    cin >> N;
		int lines [ N ] [ N ];
		for ( int i = 0; i < N; i++ )
			for ( int j = 0; j <= i; j++ )
				cin >> lines [ i ] [ j ];
		for ( int i = N - 2; i >= 0; i-- )
	        for ( int j = 0; j < N - 1; j++ )
	            lines [i][j] = lines [i][j] + max ( lines[i+1][j], lines [i+1][j+1] );
	    cout << lines [0][0] << endl;
	}
	return 0;
}