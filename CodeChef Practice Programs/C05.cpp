#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int N;
        cin >> N;

        string str = to_string(N), a, b;
        a = str[ 0 ];
        b = str[ str.size() - 1 ];

        cout << stoi(a) + stoi(b) << endl;
    }
    
    return 0;
}