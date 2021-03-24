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
        int N, E, H, A, B, C, j, min, Price;
        cin >> N >> E >> H >> A >> B >> C;
        
        if ( E/2 >= N || H/2 >= N || E/2 + H/2 >= N || ( E == H ) >= N )
        {
            if ( A <= B && A <= C )
            {
                j = E/2;
                if ( j >= N )
                {
                    Price = A*N;
                    cout << Price << endl;
                }
                else
                {
                    Price = j*A;
                    E -= j*2;
                    if ( B <= C )
                    {
                        j += H/3; 
                        if ( j >= N)
                        {
                            Price += N*B;
                            cout << Price << endl;
                        }
                        else
                        {
                            Price += H/3*B;             
                            if ( H%3 == 0 )
                                H = 0;
                            else if ( H%3 == 1 )
                                H = 1;
                            else
                                H = 2;
                        }
                    }
                }
            }
            else if ( B <= A && B <= C )
                j = 3;
            else
                j = 1;
            cout << j;
        }
        else
            cout << -1 << endl;
	}
	
    return 0;
}