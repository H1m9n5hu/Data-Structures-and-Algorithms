#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int l = str.length();
	for(int i = l - 1; i >= 0; i--) {
		if(str[i] == '0') 
			str[i] = '1';
		else
			str[i] = '0';
	}
	
	do
	{
		if(str[l - 1] == '1') {
			str[l - 1] = '0';
			l--;
		}
		else {
			str[l - 1] = '1';
			break;
		}
	} while (true);
	
	cout << str << endl;
	return 0;
}
