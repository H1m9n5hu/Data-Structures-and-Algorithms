// Chef and Meetings
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
        string P, q;

        if ( t == 1 )
            cin.ignore();
        getline( cin, P );

        stringstream int_casting ( P.substr( 0, 2 ) );
        int a = 0;
        int_casting >> a;
        stringstream casting ( P.substr( 3, 2 ) );
        int b = 0;
        casting >> b;

        if ( P.substr( 6, 8 ) == "PM" )
            if ( 1 <= a < 12 )
                a += 12;

        if ( P.substr( 6, 8 ) == "AM" && a == 12 )
            a = 0;

        cin >> N;
        cin.ignore();
        
        for ( int i = 0; i < N; i++ )
        {
            getline ( cin, q );
            
            stringstream int_cast ( q.substr( 0, 2 ) );
            int x = 0;
            int_cast >> x;
            stringstream int_c ( q.substr( 3, 2 ) );
            int y = 0;
            int_c >> y;
            stringstream int_ca ( q.substr( 9, 2 ) );
            int c = 0;
            int_ca >> c;
            stringstream int_cas ( q.substr( 12, 2 ) );
            int d = 0;
            int_cas >> d;

            if ( q.substr( 6, 2 ) == "PM" )
                if ( 1 <= x && x < 12 )
                    x += 12;
            if ( q.substr( 15, 2 ) == "PM" )
                if ( 1 <= c && c < 12 )
                    c += 12;

            if ( q.substr( 6, 2 ) == "AM" && x == 12 )
                x = 0;
            if ( q.substr( 15, 2 ) == "AM" && y == 12 )
                c = 0;

            if ( x <= a && a <= c )
            {
                if ( y <= b && b <= d )
                {
                    cout << "1";
                }
                else
                    cout << "0";
            }
            else 
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}