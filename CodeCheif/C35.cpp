#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--)
    {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;
        
        if( A+B <= D && C <= E )
            cout << "YES\n";
        else
        {
            if( B+C <= D && A <= E )
                cout << "YES\n";
            else
            {
                if( A+C <= D && B <= E )
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
	return 0;
}
