#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long int a, b;
        cin >> a >> b;
        if(a%2 == 0 && a + 2 <= b) 
            cout << a << " " << a + 2 << endl;
        else if(a%3 == 0 && a%2 == 1 && a + 3 <= b) 
            cout << a << " " << a + 3 << endl;
        else if(a % 2 == 1 && a + 3 <= b)
            cout << a + 1 << " " << a + 3 << endl;
        else if(a + 2 == b && a%2 == 1)
            cout << -1 << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}