// Source: https://www.codechef.com/problems/AMR15A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, temp, odd = 0, even = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        temp%2 == 0 ? even++ : odd++;
    }
    even > odd ? cout << "READY FOR BATTLE" : cout << "NOT READY";
    return 0;
}