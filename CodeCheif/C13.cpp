// World Record

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
        float K1, K2, K3, v, speed_meter_per_second, time, world_record = 9.58;
        cin >> K1 >> K2 >> K3 >> v;

        speed_meter_per_second = K1*K2*K3*v;

        time = 100/speed_meter_per_second;
        time = (int)(time*100 + 0.5);
        time = (float)time/100;

        world_record = (int)(world_record*100 + 0.5);
        world_record = (float)world_record/100;
        
        if ( time < world_record ) 
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;    
    }
    
    return 0;
}