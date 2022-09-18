#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    long long arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    
	    long long count = 0;  
	    for(int i = 0; i < n; i++) {
	        long long sum = 0, mul = 1;
	        for(int j = i; j < n; j++) {
	           sum += arr[j];
	           mul *= arr[j]; 
	           if(sum == mul)
	              count++;
	        }
	    }
	    
	    cout << count << endl;
	}
	return 0;
}
