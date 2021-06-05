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
        int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        int total = 0, n = 0, rem = 0;

        n = D/d - 1;
        rem = D%d;
        total += P*d;

        if ( D%d != 0 )
        {
            int S = 0;
            S = 2*Q + ( n - 1 )*Q;
            total = D*P + (n*S*d)/2 + ( n + 1 )*Q*rem;
        }  
        else
        {
            int S = 0;
            S = 2*Q + ( n - 1 )*Q;
            total = D*P + (n*S*d)/2;
        }

        cout << total << endl;
    }
    
    return 0;
}