// Source: https://www.codechef.com/problems/FLOW002

#include <bits/stdc++.h>
using namespace std;

int remainder(int a, int b){
    return (a%b);
}

int main() {
    int a, b, t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        cout << remainder(a, b) << endl;
    }

    return 0;
}
