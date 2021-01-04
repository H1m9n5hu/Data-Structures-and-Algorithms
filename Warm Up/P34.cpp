// Encoded Integer ( When we take Integer in coded form )
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
        vector <char> b = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p' }, temp_b;
        int N, j = 0, reverse_N = 0, k = 0, l = 0;
        vector <int> a;
        // Here 2 as 0 and 1 as 1
        cin >> N; // It is a Integer
        temp_b = b;
        while ( N )
        {
            j = N%10;
            k++;
            reverse_N = reverse_N*10 + j;
            if ( k%4 == 0 ) 
            {
                a.push_back ( reverse_N );
                reverse_N = 0;
                k = 0;
            }
            N = N/10;
        }
        reverse ( a.begin(), a.end() );
        for ( k; k < a.size(); k++ )
        {
            while ( a[k] )
            {
                j = a[k]%10;
                if ( j == 2 )
                {
                    l = b.size()/2;
                    for ( int i = 0; i < l; i++ )
                        b.pop_back();
                }
                if ( j == 1 )
                {
                    l = b.size()/2;
                    for ( int i = 0; i < l; i++ )
                        b [ i ] = b [ l + i ];
                    for ( int i = 0; i < l; i++ )
                        b.pop_back();
                }
                a[k] = a[k]/10;  
            }
            cout << b [ 0 ];
            b = temp_b;
        }
        cout << endl;
    }

    return 0;
}