#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int A, B;
	    cin >> A >> B;
	    int sum = A+B, No_of_Matches = 0;
	    while(sum)
	    {
	        if(sum%10 == 2 || sum%10 == 3 || sum%10 == 5)
	        {
	            No_of_Matches += 5;
	            sum /= 10;
	        }
	        else
	        {
	            if(sum%10 == 0 || sum%10 == 6 || sum%10 == 9)
	            {
	                No_of_Matches += 6;
	                sum /= 10;
	            }
	            else
	            {
	                if(sum%10 == 8)
	                {
	                    No_of_Matches += 7;
	                    sum /= 10;
	                }
	                else
	                {
	                    if(sum%10 == 7)
	                    {
	                        No_of_Matches += 3;
	                        sum /= 10;
	                    }
	                    else
	                    {
	                        if(sum%10 == 4)
	                        {
	                            No_of_Matches += 4;
	                            sum /= 10;
	                        }
	                        else
	                        {
	                            No_of_Matches += 2;
	                            sum /=10;
	                        }
	                    }
	                }
	            }
	        }
	    }
	    cout << No_of_Matches << endl;
	}
	return 0;
}
