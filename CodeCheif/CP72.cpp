#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    if(x*100/10 == y*100/20)
	        cout << "Any" << endl;
	    else if(x*100/10 > y*100/20)
	        cout << "First" << endl;
	    else 
	        cout << "Second" << endl;
	}
	return 0;
}
