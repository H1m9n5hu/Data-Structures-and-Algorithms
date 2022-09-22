#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s, r;
	    cin >> s >> r;
	    
	    int s0 = 0, s1 = 0, r0 = 0, r1 = 0;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == '0')
	            s0++;
	        else
	            s1++;
	            
	        if(r[i] == '0')
	            r0++;
	        else
	            r1++;
	    }
	    
	    if(s0 == r0 && s1 == r1)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
