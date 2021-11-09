#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while( t-- )
	{
	    int x, y, a, b, k;
	    cin >> x >> y >> a >> b >> k;
	    
	    if( (x + a*k) < (y + b*k) )
	        cout << "PETROL\n";
	    else if( (y + b*k) < (x + a*k) )
	        cout << "DIESEL\n";
	    else
	        cout << "SAME PRICE\n";
	}
	return 0;
}
