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
        int D, d, A, B, C;
        cin >> D >> d >> A >> B >> C;

        if ( D*d < 10 )
            cout << 0 << endl;
        else if ( D*d >= 10 && D*d < 21 )
            cout << A << endl;
        else if ( D*d >= 21 && D*d < 42 )
            cout << B << endl;
        else
            cout << C << endl;
    }
    
    return 0;
}
