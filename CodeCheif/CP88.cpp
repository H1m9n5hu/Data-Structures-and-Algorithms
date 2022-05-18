#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++) 
            cin >> arr[i];
        int frames = N, i = 0;
        while(true) {
            if(arr[i] == arr[i + 1])
                frames--;
            else if(i == N - 1)
                break;
            i++;
        }
        cout << frames << endl;
    }
    return 0;
}