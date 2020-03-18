// Source: https://www.codechef.com/problems/RECIPE

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int t, n, GCD;
    cin >> t;
    while (t--){
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        GCD = __gcd(arr[0],arr[1]);
        for (int i = 2; i < n; ++i) {
            GCD = __gcd(GCD,arr[i]);
        }
        for (int i = 0; i < n; ++i) {
            cout << arr[i]/GCD << " ";
        }
        cout << endl;
    }

    return 0;
}