#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N, A, B;
	    cin >> N >> A >> B;
	    string S;
	    cin >> S;
	    
	    int no_of_0 = 0, no_of_1 = 0;
	    for(int i = 0; i < N; i++)
	    {
	        if( S[i] == '0' )
	            no_of_0++;
	        if( S[i] == '1' )
	            no_of_1++;
	    }
	    
	    cout << no_of_0*A + no_of_1*B << endl;
	}
	return 0;
}
