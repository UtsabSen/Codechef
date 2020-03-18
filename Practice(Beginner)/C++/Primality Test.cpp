// Source: https://www.codechef.com/problems/PRB01

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < (int)(pow(n,0.5)+1); ++i) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        isPrime(n) ? cout << "yes" << endl : cout << "no" << endl;
    }
    return 0;
}