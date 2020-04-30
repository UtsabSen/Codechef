// Source: https://www.codechef.com/problems/STRPALIN

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s1;
        string s2;
        cin >> s1 >> s2;
        bool flag = false;
        for (int i = 0; i < s1.size(); ++i) {
            for (int j = 0; j < s2.size(); ++j) {
                if(s1[i] == s2[j]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        flag ? cout << "Yes" << endl : cout << "No" << endl;
    }
}