#include <bits/stdc++.h>
using namespace std;

int* matchingStrings(string *strings, string *queries, int n, int q) {
    int* arr = new int[q];
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < n; j++) {
            if(strings[j] == queries[i]) {
                arr[i]++;
            }
        }
    }
    return arr;
}

int main()
{
    int n, q;
    cin >> n;
    string strings[n];
    for(int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    cin >> q;
    string queries[q];
    for(int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    int *ptr = matchingStrings(strings, queries, n, q);
    for(int i = 0; i < q; i++)
        cout << ptr[i] << endl;
    return 0;
}
