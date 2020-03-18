// Source: https://www.codechef.com/problems/PPSUM

#include <bits/stdc++.h>
using namespace std;

long long int sumTillN(long long int n){
    return (n*(n+1))/2;
}

int main() {
    long long int t, iter , n;
    cin >> t;
    while (t--){
        cin >> iter >> n;
        while (iter--){
            n = sumTillN(n);
        }
        cout << n << endl;
    }
    return 0;
}