// Source: https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

int sumOfDig(int n){
    if(n==0){
        return 0;
    }
    return ((n%10) + sumOfDig(n/10));
}

int main() {
    int t, num;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> num;
        cout << sumOfDig(num) << endl;
    }
    return 0;
}
