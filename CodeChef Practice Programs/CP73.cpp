#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int N;
	    cin >> N;
	    int arr[N];
	    for(int i = 0; i < N; i++)
	         cin >> arr[i];
	    
	    set<int> s;
	    for(int i = 0; i < N; i++)
	        s.insert(arr[i]);

        int arr2[s.size()], count = 0, k = 0;
	    set<int>::iterator it;
        for (it = s.begin(); it != s.end(); ++it) {
            for(int j = 0; j < N; j++) {
	            if(*it == arr[j])
	                count++;
            }
            arr2[k] = count;
	        count = 0;
            k++;
        }
	    sort(arr2, arr2 + s.size());
	    
	    if(s.size() == 1) {
	        cout << "YES" << endl;
	    }
	    else if(arr2[s.size()-1] > arr2[s.size()-2]) {
	        cout << "YES" << endl;
	    }
	    else if(N > 1 && s.size() == 1) {
	        cout << "NO" << endl;
	    }
	    else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}