#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); 
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int N;
	    scanf("%d", &N);
	    char str[N];
        scanf("%s", &str);
        
	    int temp;
	    for(int i = 0; i < N; i++)
	    {
	        temp = i;
	        for(int j = temp + 1; j < N; j++)
	        {
	            if(str[temp] == 'R' && str[j] == 'S')
	                continue;
	            else if(str[temp] == 'S' && str[j] == 'R')
	                temp = j;
	            else if(str[temp] == 'S' && str[j] == 'P')
	                continue;
	            else if(str[temp] == 'P' && str[j] == 'S')
	                temp = j;
	            else if(str[temp] == str[j])
	                continue;
	            else if(str[temp] == 'R' && str[j] == 'P')
	                temp = j;
	            else
	                continue;
	        }
	        printf("%c", str[temp]);
	    }
	    printf("\n");
	}
	return 0;
}