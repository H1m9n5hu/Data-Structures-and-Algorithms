// Strong Language
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
        int N, K;
        cin >> N >> K;
        int count = 0;
        
        string S;
        cin.ignore();
        getline(cin,S);

        transform(S.begin(), S.end(), S.begin(), ::tolower);

        for ( int i = 0; i < N; i++ ) 
        {
            if ( S [ i ] == '*' )
            {
                count++;
                if ( count >= K )
                    break;
            }
            else
                count = 0;
        }

        if ( count >= K )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}