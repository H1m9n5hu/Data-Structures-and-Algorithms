#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int s[n];
	    for(int i = 0; i < n; i++)
	        cin >> s[i];
	    sort(s, s + n, greater<int>());
	    int max_area = 1, count = 0;
	    for(int i = 0; i < n - 1; i++) {
	        if(s[i] == s[i+1]) {
	            max_area *= s[i];
	            i++;
	            count++;
	            if(count == 2)
	                break;
	        }
	    }
	    if(count == 2)
	        cout << max_area << endl;
	    else
	        cout << -1 << endl;
	}
	return 0;
}
