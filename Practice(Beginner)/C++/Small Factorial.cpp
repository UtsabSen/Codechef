// Source: https://www.codechef.com/problems/FLOW018

#include <bits/stdc++.h>
using namespace std;

//  Factorial upto 25

long long int fact(int n){
    long long int dp[n+1];
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        dp[i] = i*dp[i-1];
    }

    return dp[n];
}

int main() {
    int t, num;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> num;
        cout << fact(num) << endl;
    }
    return 0;
}
