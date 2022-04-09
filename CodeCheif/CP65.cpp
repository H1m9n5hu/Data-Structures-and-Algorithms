#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long N;
	    cin >> N;
	    
	    long long B = 1;
	    if(N%4 == 2 || N%4 == 3)
	        B = 3;
	    else if(N%4 == 0)
	        B = N + 3;
	    else
	        B = N;
	    
	    cout << B << endl;
	}
	return 0;
}
