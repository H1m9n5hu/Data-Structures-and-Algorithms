#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long int x, y;
        cin >> x >> y;
        if(x == y)
            cout << "Yes" << endl;
        else if(x > y)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}