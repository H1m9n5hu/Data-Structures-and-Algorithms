// Chef and Dice
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
        long long int N, max_1 = 20, max_2 = 36, max_3 = 51, max_4 = 60, i, j, k = 0;
        cin >> N;

        if ( N > 0 )
        {
            if ( N == 1 )
                cout << max_1 << endl;
            else if (N == 2 )
                cout << max_2 << endl;
            else if ( N == 3 )
                cout << max_3 << endl;
            else if ( N ==4 )
                cout << max_4 << endl;
            else
            {
                i = N%4;
                j = N/4;
                switch ( i )
                {
                    case 0:
                        k = 44*( j - 1 ) + max_4;
                        break;
                    case 1:
                        k = 44*( j - 1 ) + 11*i + 15*( 4 - i ) + max_1;
                        break;
                    case 2:
                        k = 44*( j - 1 ) + 11*i + 15*( 4 - i ) + max_2;
                        break;
                    case 3: 
                        k = 44*( j - 1 ) + 11*i + 15*( 4 - i ) + max_3;
                        break;
                }
                cout << k << endl;
            }
        }
        else
            cout << "0" << endl;
    }
    
    return 0;
}