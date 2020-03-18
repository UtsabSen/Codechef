// Source: https://www.codechef.com/problems/DIFFSUM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a > b ? cout << a - b : cout << a + b;
    return 0;
}