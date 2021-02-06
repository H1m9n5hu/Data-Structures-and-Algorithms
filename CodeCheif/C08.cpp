// Highest Divisor
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int N, i = 1;
    cin >> N;
    vector <int> a;
    
    for ( i; i <= 10; i++ )
    {
        if ( N%i == 0 )
            a.push_back ( i );
    }
    
    cout << a [ a.size() - 1 ];

    return 0;
}