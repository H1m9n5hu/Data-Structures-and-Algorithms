// pattern21
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
        int k, i = 0, j = 0, n = 0;
        cin >> k;
        vector <char> a = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
        for ( i; i < k; i++ )
        {
            for ( j = i; j < k; j++ )
            {
                if ( n == 0 )
                {
                    for ( n = 0; n < k; n++ )
                        cout << a [ n ];
                    cout << endl;
                    a.pop_back();
                    a.insert ( a.begin() + j, '_');
                }
            }
            n = 0;
            if ( i == k )
                break;
        }
    }

    return 0;
}