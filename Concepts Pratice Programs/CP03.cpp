// Program to count set bit in a number(One more logic)
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
        int n, i = 0, temp;
        cin >> n;
        
        temp = n;
        
        while ( n )
        {  
            i++; 
            n = n & ( n - 1 );
        }
        
        cout << temp << " have " << i << " Set bits.";
        cout << endl;
    }
    
    return 0;
}