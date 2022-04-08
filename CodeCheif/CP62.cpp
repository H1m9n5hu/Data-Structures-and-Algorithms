#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, y, M;
	    cin >> x >> y >> M;
	    if(x*M < y)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
