#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        int array[N];
        for(int i = 0; i < N; i++)
            cin >> array[i];
        if(N == 1)
            cout << 0 << endl;
        else
        {
            sort(array, array + N);
            int number = array[0];
            int count = 1, count1 = 0;
            for(int i = 1; i < N; i++)
            {
                if(array[i] == number)
                    count++;
                else 
                {
                    number = array[i];
                    if(count > count1)
                        count1 = count;
                    count = 0;
                    count++;
                }
            }
            count1 = count1 < count ? count : count1;
            if(count1 >= 2)
                if(N == count1)
                    cout << 0 << endl;
                else
                    cout << N-count1 + 1 << endl;
            else
                cout << -1 << endl;
        }
    }
	return 0;
}
