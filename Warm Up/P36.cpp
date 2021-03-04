// Program to find all prime factors of a number.
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
        
        if ( n <= 0 )
            cout << "You enter a invalid Number.";
        else
            for ( int i = 1; i <= n; i++ )
            {      
                if ( n%i == 0 )
                {
                    int k = 0;
                    for ( int j = 1; j <= i; j++ )
                        if ( i%j == 0 )
                            k++;
                    if ( k == 1 || k == 2 )
                        cout << i << " ";
                }
            }

        cout << endl;
    }
    
    return 0;
}