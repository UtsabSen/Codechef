// Source: https://www.codechef.com/problems/PALL01

#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int n){
    int backup = n;
    int rem, rev = 0;
    while(n){
        rem = n % 10;
        rev = (rev*10) + rem;
        n /= 10;
    }
    return (backup == rev);
}

int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        isPalindrom(n) ? cout << "wins" << endl : cout << "losses" << endl;
    }
    return 0;
}