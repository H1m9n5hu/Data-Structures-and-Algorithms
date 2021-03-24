#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    while ( t--)
    {
        set <int> s;
        
        int n, m;
        cin >> n >> m;

        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            s.insert(temp);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            s.insert(temp);
        }
        
        cout << s.size() << endl;
    }
    return 0;
}