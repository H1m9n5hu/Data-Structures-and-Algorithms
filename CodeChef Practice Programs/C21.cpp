#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

	int t, hardness, tensile_strength;
	float carbon_content;
	cin >> t;

	while ( t-- )
	{
	    cin >> hardness >> carbon_content >> tensile_strength;
		if ( hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600 )
			cout << 10 << endl;
		else if ( hardness > 50 && carbon_content < 0.7 && tensile_strength <= 5600 )
			cout << 9 << endl;
		else if ( hardness <= 50 && carbon_content < 0.7 && tensile_strength > 5600 )
			cout << 8 << endl;
		else if ( hardness > 50 && carbon_content >= 0.7 && tensile_strength > 5600 )
			cout << 7 << endl;
		else if ( hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600 )
			cout << 6 << endl;
		else 
			cout << 5 << endl;
	}
	return 0;
}