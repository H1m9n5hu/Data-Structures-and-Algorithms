//Most Optimised Program for Prime Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    if(n == 1) 
    {
        cout << "Unique";
        return 0;
    }
    if((n == 2) || (n == 3))  
    {
        cout << "Prime";
        return 0;
    } 
    if((n % 2 == 0) || (n % 3 == 0))  
    {
        cout << "Not Prime";
        return 0;
    }
    for(int i = 5; i <= sqrt(n); i = i + 6)
    {
        if((n % i == 0) || (n % (i + 2) == 0))    
        {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}