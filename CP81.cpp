#include<bits/stdc++.h>
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
        
        int count = 0;
        for(int i = 0; i < N; i++)
            if(arr[i] >= 1000)
                count++;
        
        cout << count << endl;
    }
    return 0;
}