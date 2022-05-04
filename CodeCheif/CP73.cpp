#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    int i, weight = 0;
	    for(i = 0; i <= z; i++) {
	        if(i*x + y <= z)
	            weight = i;
	        else
	            break;
	    }
	    cout << weight << endl;
	}
	return 0;
}
