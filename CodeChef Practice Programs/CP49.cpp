#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, b, c, v;
        cin >> a >> b >> c >> v;
        float velocity, time;
        velocity = a*b*c*v;
        time = 100/velocity;
        time = (int)(time*100 + 0.5);
        time = (float)(time/100);
        if(time > 9.57)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}