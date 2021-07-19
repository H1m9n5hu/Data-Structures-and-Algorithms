#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    
    int t, N;
    cin >> t;
    
    while ( t-- )
    { 
        cin >> N;
        int result = 0, temp;
        temp = N;
            
        while ( temp )
        {
            if ( temp >= 100 )
            {
                result += temp/100;
                temp -= temp/100*100;
            }
            else
            {
                if ( 50 <= temp && temp < 100 )
                {
                    result += temp/50;
                    temp -= temp/50*50;
                }
                else
                {
                    if ( 10 <= temp && temp < 50 )
                    {
                        result += temp/10;
                        temp -= temp/10*10;
                    }
                    else
                    {
                        if ( 5 <= temp && temp < 10 )
                        {
                            result += temp/5;
                            temp -= temp/5*5;
                        }
                        else 
                        {
                            if ( 2 <= temp && temp < 5 )
                            {
                                result += temp/2;
                                temp -= temp/2*2;
                            }
                            else
                            {
                                result += temp/1;
                                temp -= temp/1*1;
                            }
                        }
                    }
                }
            }

        }

        cout << result << endl;
    }  
    
    return 0;
}