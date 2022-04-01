#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int s, a, b, c;
        cin >> s >> a >> b >> c;
        if(100*a <= s*(100 + c) && s*(100 + c) <= b*100) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}