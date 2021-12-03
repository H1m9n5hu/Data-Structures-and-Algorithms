#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        char a, b, c;
	    cin >> a >> b >> c;
	    char x, y;
	    cin >> x >> y;
	    if(x == a || y == a)
	        cout << a << endl;
	    else if( (x == b && y != a) || (y == b && x != a))
	        cout << b << endl;
	    else
	        cout << c << endl;
    }
	return 0;
}
