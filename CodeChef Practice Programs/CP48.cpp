#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s = 1, num_of_square = 0;
        while(true) {
            if(s*s > n) {
                num_of_square++;
                n -= (s - 1)*(s - 1);
                s = 1;
            }
            if(s*s == n) {
                num_of_square++;
                break;
            }
            s++;
        }
        cout << num_of_square << endl;
    }
    return 0;
}