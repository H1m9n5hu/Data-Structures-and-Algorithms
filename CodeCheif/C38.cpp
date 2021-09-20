#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

    int s;
    cin >> s;
    while(s--)
    {
        int N;
        cin >> N;
        int H[N];
        for(int i = 0; i < N; i++)
            cin >> H[i];

        int k = 1;
        if(N%2 == 1)
        {    
            if(H[0] == 1 && H[N - 1] == 1)
            {
                for(int i = 1; i < N; i++)
                {
                    if(i == N - 1)
                    {
                        cout << "yes" << endl;
                        break;
                    }
                    if(i > 0 && i <= N/2)
                    {
                        if(H[i] == H[0] + i)
                            continue;
                        else
                        {
                            cout << "no" << endl;
                            break;
                        }
                    }
                    else
                    {
                        if(H[i] == H[i-2*k])
                        {
                            k++;
                            continue;
                        }
                        else
                        {
                            cout << "no" << endl;
                            break;
                        }
                    }
                }
            }
            else
                cout << "no" << endl;    
        }
        else
            cout << "no" << endl;
    }
    return 0;
}