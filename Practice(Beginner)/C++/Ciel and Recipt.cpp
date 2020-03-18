// Source: https://www.codechef.com/problems/CIELRCPT

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin >> t;
    vector<int> v;
    for (int i = 11; i >= 0; --i) {
        v.push_back(pow(2,i));
    }
    for (int i = 0; i < t; ++i) {
        cin >> n;
        int count = 0;
        while(n){
            for (int j = 0; j <= 11; ++j) {
                if(v[j] <= n){
                    n -= v[j];
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
