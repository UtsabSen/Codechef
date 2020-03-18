// Source: https://www.codechef.com/problems/DECINC

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    n%4 == 0 ? cout << ++n : cout << --n;
    return 0;
}