#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N, D;
	    cin >> N >> D;
	    
	    int sum = 1024, x = 1;
	    if(D == 0)
	        cout << 1 << endl;
	    else
	    {
	        if(D > 0 && D <= 10)
	        {
	            for(int i = 1; i <= D; i++)
	                x *= 2;
	            if(x >= N)
	                cout << N << endl;
	            else
	                cout << x << endl;
	        }
	        else
	        {
	            for(int i = 1; i <= D - 10; i++)
	            {
	                sum *= 3;
	                if(sum >= N)
	                {
	                    cout << N << endl;
	                    break;
	                }
	                else if(i == D - 10)
	                    cout << sum << endl;
	            }
	        }
	    }
	}
	return 0;
}
