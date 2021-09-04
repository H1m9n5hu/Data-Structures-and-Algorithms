#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int N;
        cin >> N;
        long int A[N], B[N];
        for(long int i = 0; i < N; i++)
            cin >> A[i];
        
        long int k = 0, temp = 0;
        for(long int i = 0; i < N; i++)
        {
            for(long int j = k++; j < N; j++)
            {
                if(i%2 == 0 && A[j]%2 == 0)
                {
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                    break;
                }
                if(i%2 == 1 && A[j]%2 == 1)
                {
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                    break;
                }
            }
        }

        long int max_sum = 0;
        for(long int i = 1; i <= N; i++)
        {
            B[i-1] = (A[i-1] + i)%2;
            max_sum += B[i-1];
        }

        cout << max_sum << endl;
    }
    return 0;
}