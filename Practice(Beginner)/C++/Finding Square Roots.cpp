// Source: https://www.codechef.com/problems/FSQRT

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << ceil((int)pow(n,0.5)) << endl;
    }

    return 0;
}
