// Program of Binary Numbers
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
        int n;
        cin >> n;
        int a = 0, i = 1, j = 0;

        while ( n )
        {
            if ( ( n & i ) != 0 ) 
            {
                a++;
                if ( j < a )
                    j = a;
            }
            else
                a = 0;

            n = n >> 1;
        }

        cout << j;
        cout << endl;
    }
    
    return 0;
}