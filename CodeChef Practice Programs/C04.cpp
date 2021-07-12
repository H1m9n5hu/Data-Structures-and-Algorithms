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
        int N, sum = 0;
        cin >> N;

        while(N)
        {
            sum += N%10;
            N /= 10;
        }

        cout << sum << endl;
    }
    
    return 0;
}