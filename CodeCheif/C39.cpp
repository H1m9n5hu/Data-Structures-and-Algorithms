#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );

    int R;
    cin >> R;
    while(R--)
    {
        int L;
        cin >> L;
        string report;
        cin >> report;

        bool flag = true, flag1 = false;
        for(int i = 0; i < L; i++)
        {
            if(report[i] == 'T' && flag1 == false)
            {
                flag = false;
                break;
            }
            else if(report[i] == 'H' && flag == true)
            {
                flag = false;
                flag1 = true;
            }
            else if(report[i] == 'H' && flag == false)
                break;
            else if(report[i] == 'T' && flag == false)
                flag = true;
            else if(report[i] == 'T' && flag == true)
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }
    return 0;
}