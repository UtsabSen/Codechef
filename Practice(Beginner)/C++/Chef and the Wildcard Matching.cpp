// Source: https://www.codechef.com/problems/TWOSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        bool flag = true;
        for (int i = 0; i < s1.length(); ++i) {
            if(s1[i] != '?' and s2[i] != '?' and s1[i] != s2[i]){
                flag = false;
                break;
            }
        }
        flag ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}