#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while ( t-- )
	{
	    long long X, turns = 0;
	    cin >> X;
	    if ( X%5 == 0 )
	    {
	        while ( X%10 != 0 )
	        {
	            X *= 2;
	            turns++;
	        }
	        cout << turns << endl;
	    }
	    else
	        cout << -1 << endl;
	}
	return 0;
}
