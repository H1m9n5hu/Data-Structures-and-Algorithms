// Class vs. Instance
#include<bits/stdc++.h>
using namespace std;

class Person
{
    private:
        int age;
    public:
                Person ( int intialage )
        {
            if ( intialage > 0 )
                age = intialage;
            else 
            {
                age = 0;
                cout << "Age is not valid, setting age to 0." << endl;
            }
        }
        void yearPasses()
        {
            age += 3; 
        }
        void amIold()
        {
            if ( age < 13 )
                cout << "You are young." << endl;
            else
            {
                if ( age >= 13 && age < 18 )
                    cout << "You are a teenager." << endl;
                else
                    cout << "You are old." << endl;         
            }
                    
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
        int age;
        cin >> age;
        Person p( age );
        p.amIold();
        p.yearPasses();
        p.amIold();
        cout << endl;
    }
    
    return 0;
}