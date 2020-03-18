// Source: https://www.codechef.com/problems/POTATOES

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < (int)pow(n,0.5) + 1; ++i) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int t, x, y;
    cin >> t;
    while (t--){
        cin >> x >> y;
        int i = 1;
        while(!isPrime(x+y+i)){
            i++;
        }
        cout << i << endl;
    }
    return 0;
}