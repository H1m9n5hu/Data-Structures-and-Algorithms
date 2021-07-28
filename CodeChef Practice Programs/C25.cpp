#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
	    int X, Y, Z;
	    cin >> X >> Y >> Z;
	    
	    if ( X == 0 && Y == 0 && Z == 0 )
	        cout << 0 << endl;
	    else if ( X == 1 && Y == 1 && Z == 1 )
	        cout << 0 << endl;
	    else
	        cout << 1 << endl;
	}
	return 0;
}
