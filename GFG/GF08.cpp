// Program to check whether a String is palindrome or not
// When you enter more than one String as a input then first press space button and after that enter your String
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
        string s1, s2;
        getchar();
        getline ( cin, s1 );
        transform ( s1.begin(), s1.end(), s1.begin(), ::tolower );
        s2 = s1;
        reverse ( s1.begin(), s1.end() );
        if ( s1 == s2 ) cout << "String is Palindrome.";
        else cout << "String is not Palindrome.";
        cout << endl;
    }
    
    return 0;
}