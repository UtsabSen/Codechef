// Source: https://www.codechef.com/problems/FLOW004

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n, firstDig=0, lastDig;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        lastDig = n%10;

        while (n/=10){
            firstDig = n%10;
        }

        cout << firstDig+lastDig << endl;
    }

    return 0;
}
