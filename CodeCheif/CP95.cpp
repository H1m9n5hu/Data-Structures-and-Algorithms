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
        bool flag = true;
        for(int i = 0; i < N - 1; i++)
            if(arr[i] > arr[i+1]) {
                flag = false;
                break;
            }
        if(flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
   }
   return 0;
}