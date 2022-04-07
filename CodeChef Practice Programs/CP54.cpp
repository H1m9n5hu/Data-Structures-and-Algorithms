#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    long int s[n];
	    for(int i = 0; i < n; i++)
	        cin >> s[i];
	    sort(s, s + n);
	    long int min = s[1] - s[0];
	    for(int i = 1; i < n - 1; i++)
	        min = min <= s[i + 1] - s[i] ? min : s[i + 1] - s[i];
	    cout << min << endl;
	}
	return 0;
}
