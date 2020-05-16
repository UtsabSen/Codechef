// Source: https://www.codechef.com/problems/ZCOSCH
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    if (n <= 50) {
        cout << 100;
    } else if (n <= 100) {
        cout << 50;
    } else {
        cout << 0;
    }
}