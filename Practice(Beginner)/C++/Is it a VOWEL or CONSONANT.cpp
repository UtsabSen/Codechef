// Source: https://www.codechef.com/problems/VOWELTB

#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'){
        cout << "Vowel";
    } else{
        cout << "Consonant";
    }
    return 0;
}