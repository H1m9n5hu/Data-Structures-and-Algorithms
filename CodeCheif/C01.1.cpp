#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int d1, v1, d2, v2, p, days = 1, sum = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    while (1)
    {
        if (days == d1)
        {
            sum += v1;
            d1++;
        }
        if (days == d2)
        {
            sum += v2;
            d2++;
        }
        if(sum>=p) break;
        days++;
    }

    cout << days;
    
    return 0;
}