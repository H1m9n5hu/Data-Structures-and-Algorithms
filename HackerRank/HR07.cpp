#include <bits/stdc++.h>
using namespace std;

int lonelyinteger(int *a, int n) {
    int count = 0, value;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }
        if(count == 1){
            value = a[i];
            break;
        }
        count = 0;
    }
    return value;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int unique = lonelyinteger(a, n);
    cout << unique << endl;
    return 0;
}
