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
        int a, b, c, j = 1, i = 0, result, sum;
        cin >> a >> b >> c;
        sum = a + b + c;
        if ( sum < 7 ) cout << "No";
        else
        {
            while ( i < sum )
            {
                if ( a > 1 )
                {
                    a--;
                    cout << a << endl;;
                    i++;
                    cout << i << endl;
                }
                if ( b > 1 )
                {
                    b--;
                    cout << b << endl;
                    i++;
                    cout << i << endl;
                }
                if ( c > 1 )
                {
                    c--;
                    cout << c << endl;
                    i++;
                    cout << i << endl;
                }
                result = pow ( 7, j );
                cout << result << endl;

                if ( i == result - 1 )
                {
                    a--;
                    b--;
                    c--;
                    i++;
                    if ( a == 0 && b == 0 && c == 0 ) break;
                }

                if ( b == 1 && c == 1 && a == 0 && ( i < result - 1 ) )
                {
                    b--;
                    i++;
                    c--;
                    i++;
                    if ( i == result ) i++;
                }
                if ( a == 1 && b == 1 && c == 0 && ( i < result - 1 ) )
                {
                    a--;
                    i++;
                    b--;
                    i++;
                    if ( i == result ) i++;
                }
                if ( a == 1 && c == 1 && b == 0 && ( i < result - 1 ) )
                {
                    a--;
                    i++;
                    c--;
                    i++;
                    if ( i == result ) i++;
                }

                if ( b == 0 && c == 0 && a == 1 && ( i < result - 1 ) )
                {
                    a--;
                    i++;
                    if ( i == result ) i++;
                }
                if ( a == 0 && b == 0 && c == 1 && ( i < result - 1 ) )
                {
                    c--;
                    i++;
                    if ( i == result ) i++;
                }
                if ( a == 0 && c == 0 && b == 1 && ( i < result - 1 ) )
                {
                    b--;
                    i++;
                    if ( i == result ) i++;
                }
                // if ( b == 0 && c == 0 && a == 1 && ( i == result - 1 ) ) break;
                // if ( a == 0 && b == 0 && c == 1 && ( i = result - 1 ) ) break;
                // if ( a == 0 && c == 0 && b == 1 && ( i = result - 1 ) ) break;

                if ( i > 7 ) j++;
            }
            if ( i == result ) cout << "Yes";
            else cout << "No";
        }
    }
    return 0;
}