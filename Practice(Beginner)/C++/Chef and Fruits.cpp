// Source: https://www.codechef.com/problems/FRUITS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, apple, orange, coin;
    cin >> t;
    while(t--){
        cin >> apple >> orange >> coin;
        abs(apple-orange) <= coin ? cout << 0 << endl : cout << abs(apple-orange)-coin << endl;
    }
    return 0;
}