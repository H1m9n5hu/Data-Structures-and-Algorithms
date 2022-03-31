#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if(e >= a && b + c <= d)
            cout << "Yes" << endl;
        else if(e >= b && a + c <= d)
            cout << "Yes" << endl;
        else if(e >= c && a + b <= d)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}