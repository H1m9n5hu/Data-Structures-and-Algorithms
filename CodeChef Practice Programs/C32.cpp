#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
	    long long int N;
	    cin >> N;
	    long long int array[N], min;
	    for ( int i = 0; i < N; i++ )
	        cin >> array[i];
        min = array[0];
	    for ( long long int i = 0; i < N; i++ )
	        if ( min > array[i] )
	            min = array[i];
	    cout << min*(N-1) << endl;
	}
	return 0;
}
