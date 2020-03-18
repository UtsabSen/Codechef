// Source: https://www.codechef.com/problems/FLOW009

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    float q, n;
    cin >> t;
    while(t--){
        cin >> q >> n;
        q > 1000 ? cout << fixed << setprecision(6) << (q*n)*0.9 << endl : cout << fixed << setprecision(6) << q*n << endl;
    }
    return 0;
}