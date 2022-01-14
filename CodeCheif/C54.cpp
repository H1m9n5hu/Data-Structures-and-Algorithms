#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N, X;
	    cin >> N >> X;
	    int deposite[N], Y;
	    for(int i = 0; i < N; i++)
	    {
	        cin >> Y;
	        deposite[i] = Y;
	    }
	    
	    sort(deposite, deposite + N, greater<int>());
	    int sum = 0, count = 0;
	    for(int i = 0; i < N; i++)
	    {
	        sum += deposite[i];
	        count++;
	        if(sum >= X)
	            break;
	        if(i == N - 1)
	            count = -1;
	    }
	    
	    cout << count << endl;
	}
	return 0;
}
