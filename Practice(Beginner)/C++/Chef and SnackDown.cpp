// Source: https://www.codechef.com/problems/SNCKYEAR

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n == 2010 or n == 20015 or n == 2016 or n == 2017 or n == 2019 ? cout << "HOSTED" << endl : cout << "NOT HOSTED" << endl;
    }
}