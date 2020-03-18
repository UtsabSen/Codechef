// Source: https://www.codechef.com/problems/GDOG

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int maxProfit = 0;
        for (int i = 1; i <= k; ++i) {
            maxProfit = max(maxProfit,n%i);
        }
        cout << maxProfit << endl;
    }
    return 0;
}