#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    if(x*3 <= y*2)
	        cout << x*3 << endl;
	    else
	        cout << y*2 << endl;
	}
	return 0;
}
