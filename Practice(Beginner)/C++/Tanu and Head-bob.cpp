// Source: https://www.codechef.com/problems/HEADBOB

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> s;
        unordered_map <char, int> m;
        m.insert(make_pair('I',0));
        m.insert(make_pair('Y',0));
        m.insert(make_pair('N',0));
        for (int i = 0; i < s.length(); ++i) {
            if(s[i] == 'I'){
                m['I']++;
            }else if(s[i] == 'Y'){
                m['Y']++;
            }else if(s[i] == 'N'){
                m['N']++;
            }
        }
        if(m['I'] != 0){
            cout << "INDIAN" << endl;
        } else if(m['Y'] != 0){
            cout << "NOT INDIAN" << endl;
        } else{
            cout << "NOT SURE" << endl;
        }
        m.clear();
    }
    return 0;
}