#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int dragon_dsa, dragon_toc, dragon_dm;
	    cin >> dragon_dsa >> dragon_toc >> dragon_dm;
	    int sloth_dsa, sloth_toc, sloth_dm;
	    cin >> sloth_dsa >> sloth_toc >> sloth_dm;
	    
	    if( dragon_dsa + dragon_dm + dragon_toc > sloth_dm + sloth_toc + sloth_dsa )
            cout << "Dragon" << endl;
        else if( dragon_dsa + dragon_dm + dragon_toc < sloth_dm + sloth_toc + sloth_dsa )
            cout << "Sloth" << endl;
        else if( dragon_dsa > sloth_dsa )
            cout << "Dragon" << endl;
        else if( dragon_dsa < sloth_dsa )
            cout << "Sloth" << endl;
        else if( dragon_toc > sloth_toc )
            cout << "Dragon" << endl;
        else if( dragon_toc < sloth_toc )
            cout << "Sloth" << endl;
        else
            cout << "Tie" << endl;
	}
	return 0;
}