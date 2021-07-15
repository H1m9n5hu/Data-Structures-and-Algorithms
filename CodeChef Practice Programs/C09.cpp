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
        int a, b, c;
        cin >> a >> b >> c;

        // First Way
        int array [ 3 ];
        array [ 0 ] = a;
        array [ 1 ] = b;
        array [ 2 ] = c;
        sort ( array, array + 3 );
        cout << array [ 1 ] << endl;

        // Second Way
        // if ( a >= b )
        //     if ( a >= c )
        //         if ( b >= c ) 
        //             cout << b << endl;
        //         else
        //             cout << c << endl;
        //     else
        //         if ( a >= b ) 
        //             cout << a << endl;
        //         else
        //             cout << b << endl;
        // else
        //     if ( a >= c )
        //         cout << c << endl;
        //     else
        //         cout << a << endl;
    }  
    
    return 0;
}