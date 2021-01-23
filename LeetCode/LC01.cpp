#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate ( vector<int>& nums ) 
    {
        int r = 0;
    
        for ( int i = 0; i < nums.size(); i++ )
        {
            if ( r != 0 )
                break;
            if ( 1 <= nums [ i ] && nums [ i ] <= nums.size() - 1 )
            {
                for ( int j = i + 1; j < nums.size(); j++ )
                {
                    if ( nums [ i ] == nums [ j ] )
                    {
                        r = nums [ i ];
                        break;
                    }
                }
            }
            else
                break;

        }

        return r;
    }
};

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int N, a = 0;
        cin >> N;
        vector <int> b;
        for ( int i = 0; i < N; i++ )
        {
            cin >> a;
            b.push_back( a );
        }

        for ( int i = 0; i < b.size(); i++ )
            cout << b [ i ] << " ";
        cout << endl;

        Solution obj;
        cout << obj.findDuplicate( b );
        cout << endl;
    }
        return 0;
}