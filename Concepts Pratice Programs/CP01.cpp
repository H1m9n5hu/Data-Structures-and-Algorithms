// Program to Check that ith bit of a number is set bit or not
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
        int n, f = 1, i, temp;
        cin >> n >> i;
        
        temp = n;
        f = f << i;
        n = n & f;
        if ( n == 0 ) cout << i << "th bit of " << temp << " is not a Set bit.";
        else cout << i << "th bit of " << temp << " is a Set bit.";
        cout << endl;
    }
    
    return 0;
}