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
        int R, C, X;
		cin >> R >> C >> X;
        int A [ R ][ C ], B [ R ][ C ];
		for ( int i = 0; i < R; i++ )
			for ( int j = 0; j < C; j++ )  	
				cin >> A [ i ][ j ]; 
		for ( int i = 0; i < R; i++ )
			for ( int j = 0; j < C; j++ )  	
				cin >> B [ i ][ j ];   
		for ( int i = 0; i < R; i++ )
		{
			for ( int j = 0; j < C; j++ )  	
				cout << A [ i ][ j ] << " ";
			cout << endl;
		}
	}
	
    return 0;
}