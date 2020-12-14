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
        int N, K;
        cin >> N >> K;

        int i = 1, j = 1, temp = N, k1 = K;

        while ( temp )
        {
            if ( j <= ( N - K ) && i <= N )
            {
                cout << -i << " ";
                i++; 
                j++;
                temp--;
            }
            if( k1 >= 1 && i <= N )
            {
                cout << i << " ";
                i++;
                k1--;
                temp--;
            }
        }
        
        cout << endl;
        
    }
     
    return 0;
}