// Source: https://www.codechef.com/problems/RECTSQ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, GCD;
    cin >> t;
    while (t--){
        cin >> a >> b;
        GCD = __gcd(a,b);
        cout << (a/GCD)*(b/GCD) << endl;
    }
}