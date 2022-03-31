#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int limak_candy = 1, bob_candy = 2, total_of_limak = 0, total_of_bob = 0;
        while(true) {
            total_of_limak += limak_candy;
            if(total_of_limak - 1 >= a) {
                cout << "Bob" << endl;
                break;
            }
            total_of_bob += bob_candy;
            if(total_of_bob > b) {
                cout << "Limak" << endl;
                break;
            }
            limak_candy = bob_candy + 1;
            bob_candy = limak_candy + 1;            
        }
    }
    return 0;
}