#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        long int A[N], B[N];
        for(long int i = 0; i < N; i++)
            cin >> A[i];
        for(long int i = 0; i < N; i++)
            cin >> B[i];

        long int student = 0;
        for(int i = 0; i < N; i++)
        {
            if(A[i] >= B[i] && i == 0)
                student++;
            if(A[i] - A[i-1] >= B[i] && i > 0)
                student++;
        }

        cout << student << endl;
    }
    return 0;
}