#include <bits/stdc++.h>
using namespace std;

int main() {
	int R;
	cin >> R;
	while(R--) {
	    int L;
	    cin >> L;
	    string S;
	    cin >> S;
	    int H = 0, T = 0;
	    for(int i = 0; i < L; i++) {
	        if(S[i] == 'H')
	            H++;
	        else if(S[i] == 'T')
	            T++;
	        
	        if(T == 1 && H == 0) {
	            cout << "Invalid" << endl;
	            break;
	        }
	        else if(H == 1 && T == 1) {
	            H = 0;
	            T = 0;
	        }
	        else if(H > 1) {
	            cout << "Invalid" << endl;
	            break;
	        }
	    }
	    
	    if(H == 0 && T == 0)
	        cout << "Valid" << endl;
	    else if(H == 1 && T == 0)
	        cout << "Invalid" << endl;
	}
	return 0;
}
