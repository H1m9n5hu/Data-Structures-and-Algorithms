// No Time to Wait
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

    int N, H, x, max;
	cin >> N >> H >> x;
	int a [ N ];
	for ( int i = 0; i < N; i++ )
		cin >> a [ i ];
	
	sort ( a, a + N );
	if ( a [ N - 1 ] + x >= H )
		cout << "Yes";
	else
		cout << "No";
    
    return 0;
}