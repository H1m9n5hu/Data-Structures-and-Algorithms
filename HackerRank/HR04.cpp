#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(long *arr) {
    sort(arr, arr + 5);
    long min_sum = 0, max_sum = 0;
    for(int i = 0; i < 5; i++)
    {
        if(i >= 0 && i < 4)
            min_sum += arr[i];
        if(i >= 1 && i < 5)
            max_sum += arr[i];
    }
    cout << min_sum << " " << max_sum;
}

int main()
{
    long arr[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    miniMaxSum(arr);
    return 0;
}
