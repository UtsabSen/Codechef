// Source: https://www.codechef.com/problems/DWNLD

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, temp;
    cin >> t;
    while (t--){
        int t, k;
        cin >> t >> k;
        vector<int > time;
        vector<int > data;
        for (int i = 0; i < t; ++i) {
            cin >> temp;
            time.push_back(temp);
            cin >> temp;
            data.push_back(temp);
        }
        int s = 0;
        for (int i = 0; i < t; ++i) {
            if(time[i] <= k){
                k -= time[i];
            } else{
                time[i] -= k;
                k = 0;
                s += time[i] * data[i];
            }
        }
        cout << s << endl;
    }
}