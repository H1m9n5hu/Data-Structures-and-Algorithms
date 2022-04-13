#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long int n, x;
	    cin >> n >> x;
	    long int life[n-1];
	    for(long int i = 0; i < n - 1; i++)
	        cin >> life[i];
	        
	    long int sum = 0;
	    for(long int i = 0; i < n - 1; i++)
	        sum += life[i];

	    if(n*x - sum >= 0)
	        cout << n*x - sum << endl;
	    else
	        cout << 0 << endl;
	}
	return 0;
}
