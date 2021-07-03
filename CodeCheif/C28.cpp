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
        int g, c, height;
		cin >> g >> c;
		
		height = c*c;
		height /= (2*g);
		
		cout << height << endl;
    }
    
    return 0;
}