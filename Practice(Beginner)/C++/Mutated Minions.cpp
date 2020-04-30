// Source: https://www.codechef.com/problems/CHN15A#

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, temp;
    cin >> t;
    while (t--){
        int n, v;
        cin >> n >> v;
        int c = 0;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            if((temp+v) % 7 == 0){
                c++;
            }
        }
        cout << c << endl;
    }
}