#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        
        bool flag = true;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '1' && (str[i+1] == '1' || str[i+1] == '0'))
            {
                flag = false;
                cout << "Yes\n";
                break;
            }
        }
        if(flag)
            cout << "No\n";
    }
    return 0;
}