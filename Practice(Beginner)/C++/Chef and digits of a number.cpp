// Source: https://www.codechef.com/problems/LONGSEQ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        long int zero = count(s.begin(),s.end(),'0');
        long int one = s.length()-zero;

        one == 1 or zero == 1 ? cout << "Yes" << endl : cout << "No" << endl;

    }
}