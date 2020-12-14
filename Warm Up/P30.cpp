#include <bits/stdc++.h>

using namespace std;

int main()
{
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);

   int t;
   cin >> t;
   
   while ( t-- )
   {
       char a [  ][ 20 ] = { " Zero ", " One ", " Two ", " Three ", " Four ", " Five ", " Six ", " Seven ", " Eight ", " Nine ", " Ten ", " Eleven ", " Twelve ", " Thirteen ", " Fourteen ", " Fifteen ", " Sixteen ", " Seventeen ", " Eighteen ", " Nineteen ", " Twenty", " Thirty", " Fourty"," Fifty", " Sixty", " Seventy", " Eighty", " Nighty", " Hundred" };
       int N, i, temp, C, K = 20;
       cin >> N;

       temp = N;
       if ( N <= 20 )
            cout << N << " = " << a [ N ];
       else
       {
            i = N%10;
            N /= 10;
            N *= 10;

            for ( int j = 20; j <= 28; j++ )
            {
                if ( N == K )
                {
                    C = j;
                    break;
                }
                K += 10;
            }
            
            i == 0 ? a [ C ] : strcat ( a [ C ], a[ i ] );
            cout << temp << " = " << a [ C ];
       }
       cout << endl;
   }

   return 0;
}
