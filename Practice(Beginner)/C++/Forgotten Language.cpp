# Source: https://www.codechef.com/problems/FRGTNLNG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, l;
    string temp;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<string> v;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            v.push_back(temp);
        }
        set<string> s;
        while (k--){
            cin >> l;
            for (int i = 0; i < l; ++i) {
                cin >> temp;
                s.insert(temp);
            }
        }
        for (int i = 0; i < n; ++i) {
            auto it = s.find(v[i]);
            if(it != s.end()){
                cout << "YES ";
            }else{
                cout << "NO ";
            }
        }
        cout << endl;
    }
    return 0;
}