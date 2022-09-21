#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	        int x = 0, temp = k;
	        for(int j = i; j < n; j++) {
	            x += arr[j];
	            k--;
	            if(k == 0)
	                break;
	        }
	        k = temp;
	        sum = sum > x ? sum : x;
	    }
	   
	    cout << sum << endl;
	}
	return 0;
}
