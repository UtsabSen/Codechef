// Source: https://www.codechef.com/problems/SIMDISH

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, temp;
    cin >> t;
    while (t--){
        vector<string > line1;
        vector<string > line2;
        string s;
        for (int i = 0; i < 4; ++i) {
            cin >> s;
            line1.push_back(s);
        }
        for (int i = 0; i < 4; ++i) {
            cin >> s;
            line2.push_back(s);
        }
        int c = 0;
        bool flag = false;
        for (int i = 0; i < 4; ++i) {
            auto it = find(line2.begin(),line2.end(),line1[i]);
            if(it != line2.end()){
                c++;
            }
            if(c == 2){
                flag = true;
                break;
            }
        }
        flag ? cout << "similar" << endl : cout << "dissimilar" << endl ;
    }
}