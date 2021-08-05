#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
	    int M, x, y;
	    cin >> M >> x >> y;
	    int occupied_houses[M], mul;
	    for ( int i = 0; i < M; i++ )
	        cin >> occupied_houses[i];
	    mul = x*y;
	    sort ( occupied_houses, occupied_houses + M );
	    int safe_houses = 0, sum, sub;
	    for ( int i = 0; i < M; i++ )
	    {
	        sum = occupied_houses[i] + mul;
	        sub = occupied_houses[i+1] - mul;
	        
	        if ( i == 0 &&  occupied_houses[i] - mul > 1 )
	            safe_houses += occupied_houses[i] - mul - 1;
	        
	        if ( i == M - 1 )
	        {
	            if ( sum < 100 )
	                safe_houses += 100 - occupied_houses[i] - mul;
	        }
	        else
	            if ( sum < sub )
	                safe_houses += sub - sum - 1;
	    }
	    
	    cout << safe_houses << endl;
	}
	return 0;
}