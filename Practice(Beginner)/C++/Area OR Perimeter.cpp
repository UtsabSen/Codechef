// Source: https://www.codechef.com/problems/AREAPERI

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, b;
    cin >> l >> b;
    l*b == 2*(l+b) ? cout << "Eq\n" << l*b : l*b > 2*(l+b) ? cout << "Area\n" << l*b : cout << "Peri\n" << 2*(l+b);
}