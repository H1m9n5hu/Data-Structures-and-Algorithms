#include<bits/stdc++.h>
using namespace std;

int power(long long x, int y)
{
     
    // Initialize answer
    int res = 1;
    long int p = 1000000007;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x)%p;
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x)%p;
    }
    return res;
}

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int N, x = 2;
        cin >> N;
        long int y = N - 1;

        cout << power ( x, y) << endl;
    }
    
    return 0;
}