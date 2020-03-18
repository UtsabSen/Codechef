// Source: https://www.codechef.com/problems/COPS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, m, x, y;
    cin >> t;
    while (t--){
        int arr[100] = {0};
        cin >> m >> x >> y;
        int police[m];
        for (int i = 0; i < m; ++i) {
            cin >> police[i];
        }
        int it = 0;
        while (it < m){
            int start = police[it] - (x*y) - 1;
            int finish = police[it] + (x*y);
            if(start < 0){
                start = 0;
            }
            if(finish > 100){
                finish = 100;
            }
            for (int i = start; i < finish; ++i) {
                arr[i] = 1;
            }
            it++;
        }
        cout << count(arr,arr+100,0) << endl;
    }
    return 0;
}