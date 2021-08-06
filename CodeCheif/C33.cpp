#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
	while( t-- )
	{
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    if ( (a != b && c != d) || (a != c && b != d) || (a != d && b != c) )
            cout << 2 << endl;
        else if ( a == b && c == d && a == c )
            cout << 0 << endl;
        else
            cout << 1 << endl;
	}
	return 0;
}
