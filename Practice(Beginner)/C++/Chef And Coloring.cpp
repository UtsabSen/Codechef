// Source: https://www.codechef.com/problems/COLOR

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int l;
        string s;
        cin >> l >> s;
        unordered_map<char, int> rgb;
        for (char i : s) {
            rgb[i]++;
        }
        int maxVal = INT_MIN;
        for (auto node: rgb){
            if(maxVal < node.second){
                maxVal = node.second;
            }
        }
        cout << s.length()-maxVal << endl;
        rgb.clear();
    }
}