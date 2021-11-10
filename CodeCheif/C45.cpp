#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while( t-- )
	{
	    int N;
	    cin >> N;
	    int A[N], count = 0;
	    for( int i = 0; i < N; i++ )
	    {
	        cin >> A[i];
	        if( A[i]%2 == 1 )
	            count++;
	    }
	   
	    if( count == 0 || count == 1 )
	        cout << "0\n";
	    else
	        cout << count/2 << "\n";
	}
	return 0;
}
