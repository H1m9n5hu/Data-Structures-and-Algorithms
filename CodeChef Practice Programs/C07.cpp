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
        
        int reverse_num = 0;
        while ( N )
        {
            reverse_num = reverse_num*10 + N%10;
            N = N/10;
        }
        cout << reverse_num << endl;
    }
    
    return 0;
}