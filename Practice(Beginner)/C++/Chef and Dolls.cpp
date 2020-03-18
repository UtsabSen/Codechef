// Source: https://www.codechef.com/problems/MISSP

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;
    while (t--){
        cin >> n;
        unordered_map<int, int> dolls;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            dolls[temp]++;
        }
        for(auto node: dolls){
            if(node.second % 2 != 0){
                cout << node.first << endl;
                break;
            }
        }
    }
    return 0;
}