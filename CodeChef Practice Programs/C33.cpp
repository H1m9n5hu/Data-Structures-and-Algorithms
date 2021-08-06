#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
	    int a, b, c, x, y, z;
	    cin >> a >> b >> c >> x >> y >> z;
	    if( a+b+c > x+y+z )
		    cout << 1 << endl;
		else
		    cout << 2 << endl;
	}
	return 0;
}
