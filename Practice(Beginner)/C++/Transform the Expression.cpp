// Source: https://www.codechef.com/problems/ONP

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        char c;
        vector<char> opt;
        vector<char> res;
        for (int i = 0; i < s.length(); ++i) {
            if(s[i] == '('){
                opt.push_back(s[i]);
            }
            else if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^' ){
                opt.push_back(s[i]);
            }
            else if (s[i] == ')'){
                c = opt[opt.size()-1];
                opt.pop_back();
                opt.pop_back();
                res.push_back(c);
            } else{
                res.push_back(s[i]);
            }
        }
        for (int i = 0; i < res.size(); ++i) {
            cout << res[i];
        }
        cout << endl;
    }
}