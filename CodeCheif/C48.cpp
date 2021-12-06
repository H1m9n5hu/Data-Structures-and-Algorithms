#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N, M;
	    cin >> N >> M;
	    string str = "";
	    int length, temp = 0, count = 0;
	    if(N == M)
	        length = N + M + 2;
	    else
	        length = N > M ? N + M + (N - M)*2 : M + N + (M - N)*2;
	    cout << length << endl;
	    if(N > M)
	    {
	        while(count < N)
	        {
	            if(temp < M+1)
                {
                    str += "01"; temp++; count++;
                }
                else
                {
                    if(temp == N)
                    {
                        str += '0';
                        break;
                    }
                    else
                    {
                        str += "001"; count++;
                    }
                }

                if(count == N)
                    str += '0';
	        }
	    }
	    else
	    {
	        if( N < M)
	        {
	            while(count < M)
	            {
	                if(temp < N+1)
                    {
                        str += "10"; temp++; count++;
                    }
                    else
                    {
                        if(temp == M)
                        {
                            str += '1';
                            break;
                        }
                        else
                        {
                            str += "110"; count++;
                        }
                    }

                    if(count == M)
                        str += '1';
	            }
	        }
	        else
	            for(int i = 0; i <= M; i++)
	                str += "10";
	    }
	    cout << str << endl;
	}
	return 0;
}