// Program to Separate a given String by a Space and Print its Even Indexed and Odd Indexed characters 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int t;
    cin >> t;
    while ( t-- ) 
    {
        int N, i, j, k;
        string s;
        
        cin >> s;

        N = s.size();
        i = N%2 == 0 ? N/2 : N/2 + 1;
        j = N/2;

        for ( k = 0; k < i*2; k += 2 )
        {
            cout << s [ k ];
        }
        cout << " ";
        for ( k = 1; k < j*2; k += 2 )
        {
            cout << s [ k ];
        }

        cout <<endl;
    }

    return 0;
}