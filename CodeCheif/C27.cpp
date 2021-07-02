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
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int result_x, result_y, result;

        result_x = x*7;
        result_y = y*d;
        
        for ( int i = d; i < 7; i++ )
            result_y += z;
        
        result = result_x > result_y ? result_x : result_y;
        cout << result << endl;
    }
    
    return 0;
}