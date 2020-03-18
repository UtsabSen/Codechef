// Source: https://www.codechef.com/viewsolution/29120960

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t, n, temp;
    cin >> t;
    while (t--){
        cin >> n;
        vector<long long int> arr;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        cout << arr[0] + arr [1] << endl;
    }
    return 0;
}

// Alternate way

/*

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int minVal = INT_MAX;
        for (int i = 0; i < n-1; ++i) {
            minVal = min(minVal,(arr[i] + arr[i+1]));
        }
        cout << minVal << endl;
    }
    return 0;
}

*/