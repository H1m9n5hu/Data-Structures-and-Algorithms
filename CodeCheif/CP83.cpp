#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t;
    cin >> t;
    while(t--) {
        long int N, M;
        cin >> N >> M;
        if(M < 2)
            cout << 0 << endl;
        else {
            long int arr[N];
            for(long int i = 0; i < N; i++) 
                cin >> arr[i];
            sort(arr, arr + N, greater<int>());
            long int a = arr[0], b = 0, x = 0, y = 0, z = 0;
            for(long int i = 1; i < N; i++) {
                if(arr[i] != a) {
                    b = arr[i];
                    break;
                }
            }
            x = (a - b)%M;
            y = b - a + ceil(float((a - b)*1.0/M))*M;
            z = x >= y ? x : y;
            cout << a + b + z << endl;
        }
    }
    return 0;
}