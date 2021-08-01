#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while ( t-- )
	{
	    string str1, str2;
	    cin >> str1 >> str2;
	    
	    int min_diff = 0, max_diff = 0;
	    for ( int i = 0; i < str1.length(); i++ )
	    {
	        if ( str1[i] != str2[i] && str1[i] != '?' && str2[i] != '?' )
	        {
	            min_diff++;
	            max_diff++;
	        }
	        if ( str1[i] == '?' && str2[i] == '?' || str1[i] != '?' && str2[i] == '?' || str1[i] == '?' && str2[i] != '?' )
	            max_diff++;
	    }
	    
	    cout << min_diff << " " << max_diff << endl;
	}
	return 0;
}
