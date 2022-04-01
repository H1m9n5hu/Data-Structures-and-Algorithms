#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, v1, v2;
        cin >> n >> v1 >> v2;
        if( (float)(n*1.414/v1) > (float)n*2/v2)
            cout << "Elevator" << endl;
        else
            cout << "Stairs" << endl;
    }
    return 0;
}