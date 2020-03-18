// Source: https://www.codechef.com/problems/CFRTEST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;
    while (t--){
        cin >> n;
        set<int> party;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            party.insert(temp);
        }
        cout << party.size() << endl;
    }
}