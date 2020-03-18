// Source: https://www.codechef.com/problems/TWOVSTEN

#include <bits/stdc++.h>
using namespace std;

int twoVsTen(int n){
    int i = -1;
    if(n%10 == 0){
        return 0;
    } else if (n%10 == 5){
        return 1;
    } else{
        return i;
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << twoVsTen(n) << endl;
    }
    return 0;
}