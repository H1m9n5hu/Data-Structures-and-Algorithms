#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N, K;
	    cin >> N >> K;
	    int array[N], sum = 0;
	    char str[N];
	    for(int i = 0; i < N; i++)
	        cin >> array[i];
	    for(int i = 0; i < N; i++)
	    {
	        sum += array[i];
	        if(sum <= K)
	            str[i] = '1';
	        else
	        {
	            str[i] = '0';
	            sum -= array[i];
	        }
	    }
	    for(int i = 0; i < N; i++)
	        cout << str[i];
	    cout << endl;
	}
	return 0;
}
