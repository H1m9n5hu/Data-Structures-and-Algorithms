// Worthy Matrix
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int N, M, K;
        cin >> N >> M >> K;
        int matrix[N][M];

        for ( int i = 0; i < N; i++ )
            for ( int j = 0; j < M; j++ )
                cin >> matrix[i][j];

        bool a = false;
        bool b = false;

        for ( int i = 0; i < N; i++ )
        {
            for ( int j = 1; j < M; j++ )
                if ( matrix[i][j-1] <= matrix[i][j] )
                    a = true;
                else
                {
                    a = false;
                    break;
                }

            if ( a == 0 )
                    break;
        }

        if ( a == 1 )
        {
            for ( int j = 0; j < M; j++ )
            {
                for ( int i = 1; i < N; i++ )
                    if ( matrix[i-1][j] <= matrix[i][j] )
                        b = true;
                    else
                    {
                        b = false;
                        break;
                    }
                
                if ( b == 0 )
                    break;
            }
        }
        else
            cout << 0 << endl;

        int no_of_K_matrix = 0;
        int l;
        int sum = 0;
        int k = N <= M ? N : M;

        if ( a == 1 && b == 1 )
        {
            for ( int i = 0; i < N; i++ )
                for ( int j = 0; j < M; j++ )
                    if ( matrix[i][j] >= K )
                        no_of_K_matrix++;

            for ( l = 2; l <= k; l++ )
            {
                if ( l == k )
                {
                    for ( int p = 0; p < l; p++ )
                        for ( int q = 0; q < l; q++ )
                            sum += matrix[p][q];
                    if ( sum/(l*l) >= K )
                         no_of_K_matrix++;
                }
                else
                    for ( int i = 0; i < l; i++ )
                        for ( int j = 0; j < l; j++ )
                        {
                            for ( int p = i; p < l + i; p++ )
                                for ( int q = j; q < l + j; q++ )
                                    sum += matrix[p][q];
                            if ( sum/(l*l) >= K )
                                no_of_K_matrix++;
                            sum = 0;
                        }
            }

            cout << no_of_K_matrix << endl;
        }
        else
            cout << 0 << endl;

    }
    
    return 0;
}