#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;
    int count = 0;
    if(p1 >= 10)
        count++;
    if(p2 >= 10)
        count++;
    if(p3 >= 10)
        count++;
    if(p4 >= 10)
        count++;
    cout << count;
    return 0;
}