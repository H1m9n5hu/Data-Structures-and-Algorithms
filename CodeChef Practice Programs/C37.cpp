#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int A, B;
	    cin >> A >> B;
	    int sum = A+B, No_of_Matches = 0;
	    map<int, int> Matches = {
	        {0, 6},
	        {1, 2},
	        {2, 5},
	        {3, 5},
	        {4, 4},
	        {5, 5},
	        {6, 6},
	        {7, 3},
	        {8, 7},
	        {9, 6},
	    };
	    while(sum)
	    {
	        auto match = Matches.find(sum%10);
	        No_of_Matches += match->second;
	        sum /= 10;
	    }
	    cout << No_of_Matches << endl;
	}
	return 0;
}
