// Source: https://www.codechef.com/problems/TALAZY
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, b, m;
        cin >> n >> b >> m;
        long long int time = 0;
        while (n > 0) {
            if (n % 2 == 0) {
                time += (n / 2) * m + b;
                n /= 2;
            } else {
                time += ((n + 1) / 2) * m + b;
                n = (n - 1) / 2;
            }
            m *= 2;
        }
        cout << time - b << endl;
    }
}