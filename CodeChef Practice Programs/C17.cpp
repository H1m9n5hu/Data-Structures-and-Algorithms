#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

	int t, salary;
	cin >> t;

	while ( t-- )
	{
	    cin >> salary;

	    float gross_salary;
	    if ( salary >= 1500 )
	        gross_salary = salary + 500 + salary*0.98;
	    else
	        gross_salary = salary + salary*0.1 + salary*0.9;

		cout << fixed << setprecision(2) << gross_salary << endl;
	}
	return 0;
}