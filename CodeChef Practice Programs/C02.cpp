#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int result = 0;
    
    for ( int i = 0; i < n; i++ )
    {
        int t;
        cin >> t;
        if ( t%k == 0 )
            result++;
    }
    
    cout << result;

    return 0;
}
