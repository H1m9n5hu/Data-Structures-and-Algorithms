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
        int N, K, i = 1, Sum = 0, j = 1, r, temp;
        cin >> N >> K;
        int a[N];
        temp = N;

        if ( N == K )
            for ( i; i <= N; i++ )
                cout << i << " ";

        if ( N > K )
        {
            while ( temp )
            {
                if ( j <= ( N - K ) && i <= N )
                {
                    cout << -i << " ";
                    i++; 
                    j++;
                    temp--;
                }
                if( i <= N )
                {
                    cout << i << " ";
                    i++;
                    temp--;
                }
                
            }
            
        }
        
        cout << endl;
    }
     
    return 0;
}