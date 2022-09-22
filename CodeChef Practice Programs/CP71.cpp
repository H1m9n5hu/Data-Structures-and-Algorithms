#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, x, m = 0;
	    cin >> n >> x;
	    string s;
	    cin >> s;
	    m = n + 1;
	    
	    int steps[m];
	    steps[0] = x;
	    for(int i = 0; i < n; i++)
	        steps[i+1] = s[i] == 'R' ? ++x : --x;
	    sort(steps, steps + m);
	    
	    cout << steps[m-1] - steps[0] + 1 << endl;
	}
	return 0;
}
