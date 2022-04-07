#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long int n, k;
	    cin >> n >> k;
	    long int p[n];
	    for(int i = 0; i < n; i++)
	        cin >> p[i];
	    long int min, element;
	    int i;
	    for(i = 0; i < n; i++)
	        if(k%p[i] == 0) {
	            min = k/p[i];
	            element = p[i];
	            i++;
	            break;
	        }
	        else
	            element = -1;
	    for(i; i < n; i++)
	    {
	        if(min > k/p[i] && k%p[i] == 0)
	        {
	            min = k/p[i];
	            element = p[i];
	        }
	    }
	    cout << element << endl; 
	}
	return 0;
}
