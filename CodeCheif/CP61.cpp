#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(x >= y)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
	return 0;
}
