#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        int arr[N], arr_one[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        int i = 1;
        while(i <= N) {
            arr_one[i - 1] = arr[N - i];
            i++;
        }
        for(int i = 0; i < N; i++) {
            if(arr_one[i] != 0) {
                cout << N - i - 1<< endl;
                break;
            }
        }
    }
    return 0;
}