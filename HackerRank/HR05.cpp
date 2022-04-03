#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string x, result = "";
    if(s[8] == 'A') {
        if(s[0] == '1' && s[1] == '2') {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else {
        if(s[8] == 'P' && (s[0] == '1' && s[1] == '2')) {
            s[0] = '1';
            s[1] = '2';
        }
        else {
            char y[2];
            y[0] = s[0];
            y[1] = s[1];
            int num = stoi(y) + 12;
            x = to_string(num);
            s[0] = x[0];
            s[1] = x[1];
        }
    }
    for(int i = 0; i < 8; i++)
        result += s[i];
    return result;
}

int main()
{
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result;
    return 0;
}