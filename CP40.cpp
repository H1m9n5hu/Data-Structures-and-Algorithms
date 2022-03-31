#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, B;
        cin >> N >> B;
        map<string, int> tablet[N];
        int height, weight, price;
        for(int i = 0; i < N; i++) {
            cin >> height >> weight >> price;
            tablet[i]["height"] = height;
            tablet[i]["weight"] = weight;
            tablet[i]["price"] = price;
        }

        int max_area = 0;
        for(int i = 0; i < N; i++) {
            if(tablet[i]["price"] <= B) {
                max_area = max_area >= tablet[i]["height"]*tablet[i]["weight"] ? max_area : tablet[i]["height"]*tablet[i]["weight"];
            }
        }

        if(max_area > 0)
            cout << max_area << endl;
        else
            cout << "no tablet" << endl;
    }
    return 0;
}