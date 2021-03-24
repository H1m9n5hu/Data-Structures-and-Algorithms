#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, x, y, z, i = 0;
    cin >> a >> x >> y >> z;
    int b [ x ], c [ y ], d [ z ];
    for ( i; i < x; i++ )
        cin >> b [ i ];
    for ( i = 0; i < y; i++ )
        cin >> c [ i ];
    for ( i = 0; i < z; i++ )
        cin >> d [ i ];

    // for ( i; i < x; i++ )
    //     cout << b [ i ] << " ";
    // cout << endl;
    // for ( i = 0; i < y; i++ )
    //     cout << c [ i ] << " ";
    // cout << endl;
    // for ( i = 0; i < z; i++ )
    //     cout << d [ i ] << " ";
    // cout << endl;

    // sort ( b, b + x );
    // sort ( c, c + y );
    // sort ( d, d + z );

    for ( i; i < x; i++ )
        cout << b [ i ] << " ";
    cout << endl;
    for ( i = 0; i < y; i++ )
        cout << c [ i ] << " ";
    cout << endl;
    for ( i = 0; i < z; i++ )
        cout << d [ i ] << " ";
    cout << endl;
    // int sum = 0;
    // sum = x + y + z;
    // if ( a >= sum )
    //     cout << a - sum;
    // else 
    //     cout << -1;
    return 0;
}