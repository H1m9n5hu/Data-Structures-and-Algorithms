#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        string str[N];
        for(int i = 0; i < N; i++)
            cin >> str[i];
        int x = 0, y = 0;
        for(int i = 0; i < N; i++)
            if(str[i] == "START38")
                x++;
            else
                y++;
        cout << x << " " << y << endl;
    }
    return 0;
}