#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int count = 0;
        for(int i = 0; i < N; i++) {
            if(S[i] != 'a' && S[i] != 'i' && S[i] != 'e' && S[i] != 'o' && S[i] != 'u') {
                count++;
                if(count >= 4)
                    break;
            }
            else
                count = 0;
        }
        if(count >= 4)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
	return 0;
}
