#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int score[n];
        for(int i = 0; i < n; i++)
            cin >> score[i];
        
        int count = 0, x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(score[j] <= score[i])
                    x++;
                if(score[j] > score[i])
                    y++;
            }
            if(x - 1 >= y)
                count++;
            x = 0;
            y = 0;
        }

        cout << count << endl;
    }
    return 0;
}