// Source: https://www.codechef.com/problems/FLOW005

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin >> t;
    vector<int> v{100,50,10,5,2,1};
    for (int i = 0; i < t; ++i) {
        cin >> n;
        int count = 0;
        while(n){
            for (int j = 0; j <= 6; ++j) {
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
