#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int a, b, max;
        a = 500 - x*2 + 1000 - (x + y)*4;
        b = 500 - (x + y)*2 + 1000 - y*4;
        max = a >= b ? a : b;
        cout << max << endl;
    }
    return 0;
}