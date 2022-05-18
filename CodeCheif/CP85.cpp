#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int i = 1;
        if(x == y) 
            cout << 0 << endl;
        else {
            while(true) {
                if(x + i*8 >= y) {
                    cout << i << endl;
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}