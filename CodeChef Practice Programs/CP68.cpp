#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	   int n, a, b, sum = 0;
	   cin >> n;
	   int arr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	   for(int i = 0; i < n; i++) {
	       cin >> a >> b;
	       arr[a - 1] = arr[a - 1] > b ? arr[a - 1] : b;
	   }
	   for(int i = 0; i < 8; i++)
	       sum += arr[i];
	    
	   cout << sum << endl;
	}
	return 0;
}
