#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long N, M;
	    cin >> N >> M;
	    long long arr[N];
	    for(long long i = 0; i < N; i++)
	        cin >> arr[i];
	    long long sum = 0;
	    for(long long i = 0; i < N; i++)
	        sum += arr[i] - 1 >= -(arr[i] - M) ? arr[i] - 1 : -(arr[i] - M);
	    cout << sum << endl;
	}
	return 0;
}