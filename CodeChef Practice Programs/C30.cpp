#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
	    int x, y, sum;
	    cin >> x >> y;
	    sum = x + y;
	    bool flag = false;
	    while ( true )
	    {
	        sum++;
	        for ( int i = 2; i <= sum; i++ )
	            if ( i == sum )
	                flag = true;
	            else if ( sum%i == 0 && i != sum )
	                break;
	        if ( flag )
	            break;
	    }
	    cout << sum - x - y << endl;
	}
	return 0;
}
