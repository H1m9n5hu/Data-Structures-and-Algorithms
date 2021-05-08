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
        long int N, x, k;
        cin >> N >> x >> k;

        if ( x%k == 0 )
            cout << "Yes" << endl;
        else if ( ( N+1 - x )%k == 0 )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        
    }
    
    return 0;
}