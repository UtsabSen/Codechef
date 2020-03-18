// Source: https://www.codechef.com/problems/FLOW013

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        a+b+c == 180 ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
