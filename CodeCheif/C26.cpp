// Answers of 4th Question of CodeChef
// Here answers are correct but time complextity is high in these answers
// Here are three way to do one question and question name is Shortest Root


// First Way

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
        int N, M;
        cin >> N >> M;
        int A [ N ], B [ M ];
        for ( int i = 0; i < N; i++ )
            cin >> A [ i ];
        for ( int i = 0; i < M; i++ )
            cin >> B [ i ];
        
        for ( int i = 0; i < M; i++ )
        {
            int j = 1;
            int D = A [ B [ i ] - j ];
            int t = 0, t1 = -1, t2 = -1;
            int k = B [ i ] - j;

            if ( D == 1 || D == 2 )
                cout << t << " ";
            else
            {
                auto index_1 = find ( A, A + N, 1 );
                int x = distance ( A, index_1 );
                auto index_2 = find ( A, A + N, 2 );
                int y = distance ( A, index_2 );

                if ( x == N && y == N )
                {
                    cout << t - 1 << " ";
                    continue;
                }
                    
                if ( x < k && x < N)
                    t1 = k - x;
                else
                    t1 = t1 + 0;
                if ( y > k && y < N )
                    t2 = y - k;
                else
                    t2 = t2 + 0;

                if ( t1 >= 0 && t2 < 0 )
                    cout << t1 << " ";
                else if ( t1 < 0 && t2 >= 0 )
                    cout << t2 << " ";
                else
                {
                    t = t1 <= t2 ? t1 : t2;
                    cout << t << " ";
                }                 
            }

            j++;
        }

        cout << endl;
    }

    return 0;
}


// Second Way

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
        int N, M;
        cin >> N >> M;
        int A [ N ], B [ M ];
        for ( int i = 0; i < N; i++ )
            cin >> A [ i ];
        for ( int i = 0; i < M; i++ )
            cin >> B [ i ];
        
        for ( int i = 0; i < M; i++ )
        {
            int j = 1;
            int D = A [ B [ i ] - j ];
            int t = 0, t1 = -1, t2 = -1;
            int k = B [ i ] - j;

            if ( D == 1 || D == 2 )
                cout << t << " ";
            else
            {
                auto index_1 = find ( A, A + N, 1 );
                int x = distance ( A, index_1 );
                auto index_2 = find ( A, A + N, 2 );
                int y = distance ( A, index_2 );

                if ( x == N && y == N )
                {
                    cout << t - 1 << " ";
                    continue;
                }
                    
                if ( x < k && x < N)
                    t1 = k - x;
                else
                    t1 = t1 + 0;
                if ( y > k && y < N )
                    t2 = y - k;
                else
                    t2 = t2 + 0;

                if ( t1 >= 0 && t2 < 0 )
                    cout << t1 << " ";
                else if ( t1 < 0 && t2 >= 0 )
                    cout << t2 << " ";
                else
                {
                    t = t1 <= t2 ? t1 : t2;
                    cout << t << " ";
                }                 
            }

            j++;
        }

        cout << endl;
    }

    return 0;
}


// Third Way

#include<bits/stdc++.h>
using namespace std;

struct comp
{
    int elem;
    comp(int const &i): elem(i) {}
 
    bool operator()(int const &i) {
        return (i == elem);
    }
};

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int N, M;
        cin >> N >> M;
        int A [ N ], B [ M ];
        for ( int i = 0; i < N; i++ )
            cin >> A [ i ];
        for ( int i = 0; i < M; i++ )
            cin >> B [ i ];
        
        for ( int i = 0; i < M; i++ )
        {
            int D = B [ i ];
            int des_value = A [ D - 1 ];
            int k = D - 1;
            int t = 0, t1 = -1, t2 = -1;

            if ( des_value == 1 || des_value == 2 )
            {
                cout << t << " ";
                continue;
            }
                
            int x = k, y = k;

            while ( x )
            {
                if ( A [ x ] == 1 )
                    break;
                x -= 1;
            }
            
            if ( A [ x ] == 1 )
                t1 = k - x;
            else
                t1 = N;

            while ( y < N )
            {
                if ( A [ y ] == 2 )
                    break;
                y += 1;
            }

            if ( A [ y ] == 2 )
                t2 = y - k;
            else
                t2 = N;

            if ( t1 == N && t2 == N )
            {
                cout << t - 1 << " ";
                continue;
            }

            if ( t1 >= 0 && t2 < 0 )
                cout << t1 << " ";
            else if ( t1 < 0 && t2 >= 0 )
                cout << t2 << " ";
            else
            {
                t = t1 <= t2 ? t1 : t2;
                cout << t << " ";
            }                 
        }

        cout << endl;
    }

    return 0;
}