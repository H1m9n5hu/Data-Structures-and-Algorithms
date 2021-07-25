#include<bits/stdc++.h>
using namespace std;

int main()
{  
	freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

	int t, E, K;
	cin >> t;
	while ( t-- )
	{
	    cin >> E >> K;
	    int len_of_foodchain = 0;
	    while ( E )
	    {
	        len_of_foodchain++;
	        E = E/K;
	    }
	    cout << len_of_foodchain << endl;
	}

    return 0;
}