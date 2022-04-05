#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int max_speeds[n];
	    for(int i = 0; i < n; i++)
	        cin >> max_speeds[i];
	        
	    int num_of_cars = 1;         
        if(n > 1) {
	        for(int i = 0; i < n - 1; i++) {
	            if(max_speeds[i+1] < max_speeds[i]) {
	                num_of_cars++;
                }
	            else
                    max_speeds[i+1] = max_speeds[i];
	        } 
        }
        cout << num_of_cars << endl;
	}
	return 0;
}
