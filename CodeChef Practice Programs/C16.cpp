#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, B;
	cin >> t;
	while ( t-- )
	{
	    cin >> B;
	    
	    int a, no_of_squares, t, s;
	    a = 2;
	    
	   // Here t is area of full tringle and s is area of isosceles right angle tringle.
	    if ( B%2 == 0 )
	    {
	        t = B*B/2;
	        s = t - B*a/2;
	    }
	    else
	    {
	        B -= 1;
	        t = B*B/2;
	        s = t - B*a/2;
	    }
	    
	    no_of_squares = s/(2*a);
	    cout << no_of_squares << endl;
	}
	return 0;
}
