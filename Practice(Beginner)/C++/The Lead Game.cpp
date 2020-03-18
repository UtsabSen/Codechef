// Source: https://www.codechef.com/problems/TLG

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, a, b;
    cin >> t;
    vector<int> p1(t,0), p2(t,0);

    unordered_map<int, int> res;
    int maxScoreP1 = INT_MIN;
    int maxScoreP2 = INT_MIN;

    cin >> p1[0] >> p2[0];
    p1[0] > p2[0] ? res[1] = p1[0]-p2[0] : res[2] = p2[0]-p1[0];
    maxScoreP1 = max(maxScoreP1,res[1]);
    maxScoreP2 = max(maxScoreP2,res[2]);

    for (int i = 1; i < t; ++i) {
        cin >> a >> b;

        p1[i] = p1[i-1] + a;
        p2[i] = p2[i-1] + b;

        if(p1[i] > p2[i] ){
            res[1] = p1[i]-p2[i];
            maxScoreP1 = max(maxScoreP1,res[1]);
        } else{
            res[2] = p2[i]-p1[i];
            maxScoreP2 = max(maxScoreP2,res[2]);
        }
    }

    maxScoreP1 > maxScoreP2 ? cout << 1 << " " << maxScoreP1 : cout << 2 << " " << maxScoreP2;

    return 0;
}
