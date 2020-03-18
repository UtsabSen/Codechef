// Source: https://www.codechef.com/problems/HOWMANY

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while(n){
        cnt++;
        n /= 10;
    }
    cnt < 4 ? cout << cnt : cout << "More than 3 digits";
}