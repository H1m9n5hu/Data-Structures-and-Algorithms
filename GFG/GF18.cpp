// Program to Calculate Union of two arrays
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
       int N,M;
	   cin>>N>>M;
	   vector <int> a,b;
	   int i,j=1;
	
	   for( i=0;i<N;i++)
       {
          int input;
          cin>>input;
	      a.push_back(input);
       }
	   for( i=0;i<M;i++)
       {
          int input;
          cin>>input;
	      b.push_back(input);
        }
   
       for(i=0;i<N;i++)
          b.push_back(a[i]);
      
       sort(b.begin(),b.end());

	   a.clear();
	
       for(i=0;i<b.size();i++)
       {
    	    if(b[i]==b[i+1])  j++;
    	    else
    	    {
    		    if(j>1)  a.push_back(b[i]);
    		    else  a.push_back(b[i]);
    	    }
    	    j=1;
       }

        cout << "Union of two arrays is : ";
        for(i=0;i<a.size();i++)
            cout << a [ i ] << " ";
        cout << endl;
        cout << "Size of Union array is : " << a.size();
        cout << endl;
    }
    return 0;
}