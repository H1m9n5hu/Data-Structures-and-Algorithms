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
       int N, i, temp, j;
       cin >> N;

       temp = N;
       if ( N <= 20 )
            cout << N << " = " << a [ N ];
       else
       {
            i = N%10;
            N /= 10;
            N *= 10;
            N == 20 ? j = 20 : N == 30 ? j = 21 : N == 40 ? j = 22 : N == 50 ? j = 23 : N == 60 ? j = 24 : N == 70 ? j = 25 : N == 80 ? j = 26 : N == 90 ? j = 27 : N == 100 ? j = 28 : j = 29;
            i == 0 ? a [ j ] : strcat ( a [ j ], a[ i ] );
            cout << temp << " = " << a [ j ];
       }
       cout << endl;
   }

   return 0;
}
