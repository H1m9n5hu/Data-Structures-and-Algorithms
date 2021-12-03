#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string S;
        cin >> S;
        sort(S.begin(), S.end());
        char char_1 = S[0];
        int count = 1, count1 = 0;
        for(int i = 1; i < S.length(); i++)
        {
            if(S[i] == char_1)
                count++;
            else 
            {
                char_1 = S[i];
                if(count > count1)
                    count1 = count;
                count = 0;
                count++;
            }
        }
        count1 = count1 < count ? count : count1;
            if(count1 == S.length()-count1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
