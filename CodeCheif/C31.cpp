#include <bits/stdc++.h>
using namespace std;

int main() 
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
	int t;
	cin >> t;
	while ( t-- )
	{
		long long A, B, X, sum;
	    cin >> A >> B;

	    if ( A == B )
			X = A;
		else
			X = A + 1;
		sum = ceil ( (B - X)*1.0/2 ) + ceil ( (X - A)*1.0/2 );

		cout << sum << endl;
	}
	return 0;
}