#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x;
	    cin >> x;
	    if(x*10/100 >= 100)
	        cout << x*10/100 << endl;
	    else
	        cout << 100 << endl;
	}
	return 0;
}
