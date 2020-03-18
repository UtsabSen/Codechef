// Source: https://www.codechef.com/problems/INTEST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, count = 0;
    long long int k, temp;
    cin >> t >> k;
    for (int i = 0; i < t; ++i) {
        cin >> temp;
        if(temp%k == 0) {
            count++;
        }
    }
    cout << count;

    return 0;
}