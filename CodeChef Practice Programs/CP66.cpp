#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	        
	    int a = 0, b = 0, c = 0, d = 0, e = 0;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] == "cakewalk") {
	            if(a == 1)
	                continue;
	            else
	                a++;
	        }
	        else if(arr[i] == "simple") {
	            if(b == 1)
	                continue;
	            else
	                b++;
	        }
	        else if(arr[i] == "easy") {
	            if(c == 1)
	                continue;
	            else
	                c++;
	        }
	        else if(arr[i] == "easy-medium" || arr[i] == "medium") {
	            if(d == 1)
	                continue;
	            else
	                d++;
	        }
	        else if(arr[i] == "medium-hard" || arr[i] == "hard") {
	            if(e == 1)
	                continue;
	            else
	                e++;
	        }
	    }
	    
	    if(a + b + c + d + e == 5)
	        cout << "Yes" << endl;
	    else 
	        cout << "No" << endl;
	}
	return 0;
}
