// Source: https://www.codechef.com/problems/KTTABLE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> provided_time;
        vector<int> needed_time;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            provided_time.push_back(temp);
        }
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            needed_time.push_back(temp);
        }

        int count = 0, j = 0;
        int avail = provided_time[0];
        int need = needed_time[j];
        j++;
        for (int i = 1; i <= n; ++i) {
            if(need <= avail){
                count++;
            }
            need = needed_time[j];
            j++;
            avail = provided_time[i] - provided_time[i-1];
        }
        cout << count << endl;
    }
}