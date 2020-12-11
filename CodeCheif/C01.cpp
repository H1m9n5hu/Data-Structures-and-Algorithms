#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // freopen ("input.txt", "r", stdin);
    // freopen ("output.txt", "w", stdout);

    int d1, v1, d2, v2, p, days = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    while (p>0)
    {
        days++;
        if (days >= d1)
            p -= v1;
        if (days >= d2)
            p -= v2;
    }

    cout << days;
    return 0;
}