// Source: https://www.codechef.com/problems/LAPIN

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> s1, s2;

void frequencyS1(string arr, int si, int ei){
    for (int i = si; i <= ei; ++i) {
        s1[arr[i]]++;
    }
}
void frequencyS2(string arr, int si, int ei){
    for (int i = si; i <= ei; ++i) {
        s2[arr[i]]++;
    }
}


int main() {
    int t;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        int s1_start = 0, s1_end, s2_start, s2_end = s.length()-1;
        if(s.length()%2 == 0){
            s1_end = (s.length() / 2) - 1;
            s2_start = s1_end + 1;
        }else{
            s1_end = (s.length() / 2) - 1;
            s2_start = s1_end + 2;
        }
        for (int i = s1_start; i <= s1_end; ++i) {
            frequencyS1(s,s1_start,s1_end);
        }
        for (int i = s2_start; i <= s2_end; ++i) {
            frequencyS2(s,s2_start,s2_end);
        }

        bool flag = true;
        if(s1.size() == s2.size()) {
            for (auto key: s1) {
                if (s1[key.first] != s2[key.first]){
                    flag = false;
                    break;
                }
            }
            flag ? cout << "YES" << endl : cout << "NO" << endl;
        } else{
            cout << "NO" << endl;
        }
        s1.clear();
        s2.clear();
    }


    return 0;
}