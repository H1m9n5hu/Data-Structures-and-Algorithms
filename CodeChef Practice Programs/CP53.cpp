#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int M, x, y;
	    cin >> M >> x >> y;
	    int arr[M];
	    for(int i = 0; i < M; i++)
	        cin >> arr[i];
	    int house = x*y, safe_houses = 0;
	    for(int i = 1; i <= 100; i++)
	    {
	        bool safe = true;
	        for(int j = 0; j < M; j++)
	        {
	            int leftRange = arr[j] - house;
	            int rightRange = arr[j] + house;
	            if(leftRange <= i && i <= rightRange)
	                safe = false;
	        }
	        if(safe)
	            safe_houses++;
	    }
	    cout << safe_houses << endl;
	}
	return 0;
}
