// Program to check whether one string is rotation of another
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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int i, j;
        string a [ s1.size() ];

        for ( j = 0; j < s1.size(); j++ )
        {
            for ( i = j; i < s1.size(); i++ )
                a [ j ] = a [ j ] + s1 [ i ];
            for ( i = 0; i < j; i++ )
                a [ j ] = a [ j ] + s1 [ i ];
            cout << a [ j ] << endl;
        }

        for ( i = 0; i < s1.size(); i++ )
            if ( a [ i ] == s2 )
                break;

        if ( i < s1.size() ) cout << "String \"" << s1 << "\" is a rotation of String \"" << s2 << "\"";
        else cout << "String \"" << s1 << "\" is not a rotation of String \"" << s2 << "\"";
        cout << endl;
    }

    return 0;
} 