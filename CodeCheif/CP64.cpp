#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long int x, y;
	    cin >> x >> y;
	    if(x < y && y%x == 0)
	        cout << y/x - 1 << endl;
	    else if(x < y && y%x != 0)
	        cout << y/x << endl;
	    else
	        cout << 0 << endl;
	}
	return 0;
}
