// Program to Move all negative numbers to beginning and positive to end without using Swap function
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
        int N;
        cin >> N;
        int a [ N ], i, j = 0, k;
        for ( i = 0; i < N; i++ )
            cin >> a [ i ];

        for ( i = 0; i < N; i++ )
        {
            if ( a [ i ] < 0 )
            {
                if ( i != j )
                {
                    k = a [ j ];
                    a [ j ] = a [ i ];
                    a [ i ] = k; 
                }
                j++;
            }
        }
        
        for ( i = 0; i < N; i++ )
            cout << a [ i ] << " ";
        cout << endl;
    }
    
    return 0;
}

// Program to Move all negative numbers to beginning and positive to end by using Swap function
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     freopen ( "input.txt", "r", stdin );
//     freopen ( "output.txt", "w", stdout );
    
//     int t;
//     cin >> t;
    
//     while ( t-- )
//     {
//         int N;
//         cin >> N;
//         int a [ N ], i, j = 0;
//         for ( i = 0; i < N; i++ )
//             cin >> a [ i ];  

//         for ( i = 0; i < N; i++ )
//         {
//             if ( a [ i ] < 0 )
//             {
//                 if ( i != j )
//                     swap ( a [ i ], a [ j ] );
//                 j++;
//             }
//         }
        
//         for ( i = 0; i < N; i++ )
//             cout << a [ i ] << " ";
//         cout << endl;
//     }
    
//     return 0;
// }
