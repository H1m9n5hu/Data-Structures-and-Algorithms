#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long int n;
	    cin >> n;
	    long long int a[n];
	    for(long long int i = 0; i < n; i++) 
	        cin >> a[i];
	    long long int positive_num = 0, negative_num = 0;
	    for(long long int i = 0; i < n; i++)
	        if(a[i] == 0) 
	            continue;
	        else if(a[i] > 0)
	            positive_num++;
	        else
	            negative_num++;
	    cout << positive_num*(positive_num - 1)/2 + negative_num*(negative_num - 1)/2 << endl;
	}
	return 0;
}
