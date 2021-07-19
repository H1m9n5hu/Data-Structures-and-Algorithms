    #include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t, N;
    cin >> t;
    
    while ( t-- )
    {
        cin >> N;
        int array [ N ], even_numbers = 0, odd_numbers = 0;
        for ( int i = 0; i < N; i++ )
            cin >> array [ i ];
            
        for ( int i = 0; i < N; i++ )
            if ( array [ i ]%2 == 0 )
                even_numbers++;
            else
                odd_numbers++;

        if ( even_numbers > odd_numbers )
            cout << "READY FOR BATTLE" << endl;
        else
            cout << "NOT READY" << endl;
    }  
    
    return 0;
}