#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t, N;
    cin >> t;
    
    while ( t-- )
    { 
        cin >> N;
        string str, str1;
	    str = to_string ( N );
	    str1 = str;
        reverse ( str.begin(), str.end() );
        if ( str == str1 )
            cout << "wins" << endl;
        else
            cout << "loses" << endl;
    }  
    
    return 0;
}