#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

	int p;
	cin >> p;
	while ( p-- )
	{
		int N;
		cin >> N;
		char gestures [ N ];
		for ( int i = 0; i < N; i++ )
			cin >> gestures [ i ];

		bool flag = true;
		for ( int i = 0; i < N; i++ )
		{
			if ( gestures [ i ] == 'Y' )
			{
				cout << "NOT INDIAN" << endl;
				flag = false;
				break;
			}
			
			if ( gestures [ i ] == 'I' )
			{
				cout << "INDIAN" << endl;
				flag = false;
				break;
			}
		}

		if ( flag )
			cout << "NOT SURE" << endl;
	}
	return 0;
}