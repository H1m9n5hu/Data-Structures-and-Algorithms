#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while( t-- )
	{
	    int N, K, coins = 0;
	    cin >> N >> K;
	    for ( int i = 1; i <= K; i++ )
	        if ( N%i > coins )
	            coins = N%i;
	    cout << coins << endl;
	}
	return 0;
}
