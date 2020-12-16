// Program to find total set bits in each element of array
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
        int N, i = 0, temp, j = 0;
        cin >> N;
        temp = N;

        int a [ N ];
        for ( i; i < N; i++) 
            cin >> a [ i ];
        i = 0;
        
        while ( a [ i ] )
        {  
            j++; 
            a [ i ] = a [ i ] & a [ i ] - 1;
            if ( a [ i ] == 0 )
            {
                cout << j << " ";
                i++;
                j = 0;
            }
            if ( i == N ) break;
        }

        cout << endl;
    }
    
    return 0;
}