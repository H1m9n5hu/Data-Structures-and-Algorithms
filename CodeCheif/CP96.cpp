#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int N, x, y;
        cin >> N >> x >> y;
        int arr[N];
        for(int i=0; i<N; i++)
            cin >> arr[i];
            
        long int sum = 0, total = 0;
        for(int i=0; i<N; i++) {
            total += arr[i];
            if(arr[i] - y > 0) 
                sum += arr[i] - y;
        }
        sum += x;
        
        if(sum < total) 
            cout << "Coupon" << endl;
        else
            cout << "No Coupon" << endl;
    }
    return 0;
}