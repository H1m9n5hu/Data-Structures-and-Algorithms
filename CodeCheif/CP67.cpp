#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int a, b;
	    cin >> a >> b;
	    int c, d;
	    cin >> c >> d;
	    if(c >= a && d >= b)
	        cout << "Possible" << endl;
	    else
	        cout << "Impossible" << endl;
	}
	return 0;
}
