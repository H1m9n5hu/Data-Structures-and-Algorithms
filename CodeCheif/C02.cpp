#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int t;
    cin >> t;

    while ( t-- )
    {
        long long int a, b, i;
        cin >> a >> b;
            
        i = a*b;
        i%2 == 0 ? cout << i/2 << endl : cout << i/2 + 1 << endl;
    }

    return 0;
}