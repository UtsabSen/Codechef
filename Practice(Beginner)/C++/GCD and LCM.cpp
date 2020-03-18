// Source: https://www.codechef.com/problems/FLOW016

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        long long int GCD = __gcd(a, b);
        long long int LCM = (a * b) / GCD;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}