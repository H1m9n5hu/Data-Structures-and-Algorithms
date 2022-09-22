#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	while(t--) {
	    int price[26];
	    for(int i = 0; i < 26; i++)
	        cin >> price[i];
	    string s;
	    cin >> s;
	    
	    string alphabet = "abcdefghijklmnopqrstuvwxyz";
	    vector<int> miss_alpha;
	    for(int i = 0; i < 26; i++) {
	        for(int j = 0; j < s.size(); j++) {
	            if(s[j] == alphabet[i]) 
	                break;
	            else if(j == s.size()-1)
	                miss_alpha.push_back(i);
	        }
	    }
	    
	    int sum = 0;
	    for(int i = 0; i < miss_alpha.size(); i++)
	        sum += price[miss_alpha[i]];
	    cout << sum << endl;
	}
	return 0;
}
