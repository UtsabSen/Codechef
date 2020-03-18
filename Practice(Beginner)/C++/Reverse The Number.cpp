// Source: https://www.codechef.com/problems/FLOW007

#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int l = n;
    if(to_string(l).length()==1){
        return n;
    }
    return (n % 10) * pow(10, (to_string(l).length()) - 1) + reverseNum(n / 10);
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << reverseNum(n) << endl;
    }

    return 0;
}
