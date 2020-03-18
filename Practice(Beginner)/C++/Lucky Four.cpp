// Source: https://www.codechef.com/problems/LUCKFOUR

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n, count;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        count = 0;
        cin >> n;
        while (n){
            if(n%10 == 4){
                count++;
            }
            n /= 10;
        }
        cout << count << endl;
    }

    return 0;
}
