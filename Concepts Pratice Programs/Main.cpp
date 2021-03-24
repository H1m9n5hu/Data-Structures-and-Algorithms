// Program to Sum of two numbers without using Plus Operator 
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
        int a, b, i;

        cin >> a >> b;

        while ( i )
        {
            i = a & b;
            a = a ^ b;
            if ( i != 0 ) b = i << 1;
        }

        cout << "Sum is " << a << ".";

        cout << endl;
    }
    
    return 0;
}