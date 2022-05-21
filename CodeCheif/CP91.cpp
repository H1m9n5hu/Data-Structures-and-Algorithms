#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a >= b && b >= c && b >= d || a >= c && c >= b && c >= d || a >= d && d >= c && d >= b)
            cout << a << endl;
        else if(b >= a && a >= c && a >= d || b >= c && c >= a && c >= d || b >= d && d >= c && d >= a)
            cout << b << endl;
        else if(c >= b && b >= a && b >= d || c >= a && a >= b && a >= d || c >= d && d >= a && d >= b)
            cout << c << endl;
        else
            cout << d << endl;
    }
    return 0;
}