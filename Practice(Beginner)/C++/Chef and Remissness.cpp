// Source: https://www.codechef.com/problems/REMISS

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, a, b;
    cin >> t;
    while (t--){
        cin >> a >> b;
        cout << max(a,b) << " " << a+b << endl;
    }

    return 0;
}
