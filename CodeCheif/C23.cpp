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
        int x, y, X, Y;
        cin >> x >> y >> X >> Y;

        cout << X/x + Y/y << endl;
    }
    
    return 0;
}