#include <bits/stdc++.h>
using namespace std;

int main() {
	long int n, d;
	cin >> n >> d;
	long int l[n];
	for(int i = 0; i < n; i++)
	    cin >> l[i];
	sort(l, l + n);
	long int max_pair = 0;
	for(int i = 0; i < n - 1; i++) {
	    if(l[i+1] - l[i] <= d) {
	        max_pair++;
	        i++;
	    }
	}
	cout << max_pair << endl;
	return 0;
}
