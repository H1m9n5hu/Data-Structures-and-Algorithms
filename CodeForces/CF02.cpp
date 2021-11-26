#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    
    while (t--)
    {
        long int n, l, r, k;
        cin >> n >> l >> r >> k;
        long int array[n];
        for (long int i = 0; i < n; i++ )
            cin >> array[i];
    
        sort(array, array + n);
        
        long int sum = 0, count = 0;
        for(long int i = 0; i < n; i++)
        {
            if(sum+array[i] <= k)
            {
                if(l <= array[i] && r >= array[i])
                {
                    sum += array[i];
                    count++;
                }
            }
            else
                break;
        }

        cout << count << "\n";
    }
    
    return 0;
}