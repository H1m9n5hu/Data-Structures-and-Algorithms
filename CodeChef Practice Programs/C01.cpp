#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    cin >> x >> y;
    if ( x%5 == 0 && x != 0 )
    {
        if ( y >= x + 0.50 )
            y -= x + 0.50;
        cout << fixed << setprecision ( 2 ) << y;
    }
    else
        cout << fixed << setprecision ( 2 ) << y;
    return 0;
}