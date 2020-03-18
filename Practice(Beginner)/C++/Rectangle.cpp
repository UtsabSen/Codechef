// Source: https://www.codechef.com/problems/RECTANGL

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;
    while (t--){
        cin >> a >> b >> c >> d;
        if (a == b and c == d){
            cout << "YES" << endl;
        } else if (a == c and b == d){
            cout << "YES" << endl;
        } else if (a == d and b == c){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}