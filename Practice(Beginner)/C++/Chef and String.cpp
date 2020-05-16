// Source: https://www.codechef.com/problems/RECNDSTR
#include <bits/stdc++.h>
using namespace std;

string comp(string s) {
    string myLStr = "";
    string myRStr = "";

    for (int i = 1; i < s.size(); ++i) {
        myLStr += s[i];
    }
    myRStr += s[s.size()-1];
    for (int i = 0; i < s.size()-1; ++i) {
        myRStr += s[i];
    }
    myLStr += s[0];
    return (myLStr==myRStr ? "YES" : "NO");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << comp(s) << endl;
    }
}