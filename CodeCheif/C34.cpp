#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
	int t;
	cin >> t;
	while ( t-- )
	{
	    long int N, p, K;
	    cin >> N >> p >> K;
	    long int i = 0, j = 0, temp = 0, days = 1;
	    while ( i != p )
	    {
	        if ( i%K == temp )
	        {
                days++;
	            i += K;
	            if ( i >= N )
                {
                    temp++;
	                j++;
	                i = j;
                }
	        }
	        else
	        {
	            temp++;
	            j++;
	            i = j;
	        }
	    }
	    cout << days << endl;
	}
	return 0;
}