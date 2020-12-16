// Program to check that a number is a power of two or not
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
        int N;
        cin >> N;
        
        if ( N <= 0 ) cout << N << " is not a Positive number.";
        else ( N & N - 1 ) == 0 ? cout << N << " is a power of 2." : cout << N << " is not a power of 2.";

        cout << endl;
    }
    
    return 0;
}