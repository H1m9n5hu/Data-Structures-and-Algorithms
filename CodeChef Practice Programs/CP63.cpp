#include <iostream>
using namespace std;

int main() {
	long long r;
	cin >> r;
	if(r > 0 && r < 51)
	    cout << 100;
	else if(r > 50 && r < 101)
	    cout << 50;
	else
	    cout << 0;
	return 0;
}
