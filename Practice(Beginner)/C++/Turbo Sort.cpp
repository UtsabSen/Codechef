// Source: https://www.codechef.com/problems/TSORT

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}
