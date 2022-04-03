#include <bits/stdc++.h>
using namespace std;

long flippingBits(long n) {
    long total = 4294967295;
    return total - n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long num;
        cin >> num;
        long result = flippingBits(num);
        cout << result << endl;
    }
    return 0;
}
