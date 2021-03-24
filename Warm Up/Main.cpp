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
        char a [  ][ 30 ] = { " Zero ", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine", " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen", " Twenty", " Thirty", " Fourty"," Fifty", " Sixty", " Seventy", " Eighty", " Nighty", " Hundred", " Thousand" };
        char b [  ][ 10 ] = { " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine" };
        int N, i, j, k = 0, l, temp;
        cin >> N;

        temp = N;
        if ( 1 <= N && N <= 100 )
        {
            if ( N <= 20 )
            cout << N << " = " << a [ N ];
            else
            {
                i = N%10;
                N /= 10;
                N *= 10;
                
                k = 20;
                for ( j = 20; j <= 28; j++ )
                {
                    if ( N == k )
                    {
                        l = j;
                        break;
                    }
                    k += 10;
                }
                i == 0 ? a [ l ] : strcat ( a [ l ], a[ i ] );
                cout << temp << " = " << a [ l ];
            }
        }
        if ( 100 < N && N < 10000 )
        {
            while ( N )
            {
                i = N%10;
                N = N/10;
                k++;
            }

            if ( k == 3 )
                strcat ( a [ i ], a [ 28 ] );
            else
                strcat ( a [ i ], a [ 29 ] );
            
            N = temp;
            j = N%10;

            for ( k; k>2; k-- )
                N = N/10;
            
            l = N%10;

            if ( ( l==1 || l==2 ) && j == 0 )
            {
                l *= 10;
                strcat ( a [ i ], a [ l ] );
            }
            if ( 2 <= l && l <= 9 )
            {
                if ( l == 2)
                    l *= 10;
                else
                    l = l - 2 + 20;
                
                strcat ( a [ i ], a [ l ] );
            }
            if ( l == 1 && j != 0 )
            {
                l *= 10;
                l += j;
                strcat ( a [ i ], a [ l ] );
            }
            else
            {
                if ( j != 0 )
                    strcat ( a [ i ], b [ j - 1 ] );
            }
            
            cout << temp << " = " << a [ i ];
        }
        cout << endl;
    }
    
    return 0;
}