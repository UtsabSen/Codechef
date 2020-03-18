// Source: https://www.codechef.com/problems/FLOW017

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, a, b, c;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;
        if((b > a and a > c) or (c > a and a > b)){
            cout << a << endl;
        }else if((a > b and b > c) or (c > b and b > a)){
            cout << b << endl;
        }else{
            cout << c << endl;
        }
    }

    return 0;
}
