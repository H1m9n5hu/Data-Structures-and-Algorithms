#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    int count = 0, max = 0;
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(arr[i] == arr[j])
	                count++;
	        }
	        if(count >= max)
	            max = count;
	        count = 0;
	    }   
	    cout << n-max << endl;
	}
	return 0;
}
