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
        int X, A, B;
        cin >> X >> A >> B;

        if ( 31 <= X && X <=40 )
        {
            if ( 101 <= A && A <= 120) 
            {
                if ( 1 <= B && B <= 5 )
                {
                    int max_sugar = A + ( 100 - X )*B;
                    max_sugar *= 10;
                    cout << max_sugar << endl;
                }
            }
        }
        
    }
    
    return 0;
}