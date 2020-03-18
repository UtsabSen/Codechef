// Source: https://www.codechef.com/problems/CHN09

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int cnt_a = count(s.begin(),s.end(),'a');
        int cnt_b = s.length() - cnt_a;
        cout << min(cnt_a,cnt_b) << endl;
    }
    return 0;
}