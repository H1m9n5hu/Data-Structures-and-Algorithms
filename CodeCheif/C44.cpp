#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while( t-- )
	{
	    int x, y;
	    cin >> x >> y;
	    
	    if( x%2 == 0 && x != 0 )
	        cout << "YES\n";
	    else if( y%2 == 0 && x == 0 && y != 0 )
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}
