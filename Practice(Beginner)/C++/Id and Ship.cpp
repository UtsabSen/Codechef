// Source: https://www.codechef.com/problems/FLOW010

#include <bits/stdc++.h>
using namespace std;

string shipClass(char ch){
    unordered_map <char, string> shipName;
    shipName['b'] = "BattleShip";
    shipName['B'] = "BattleShip";
    shipName['c'] = "Cruiser";
    shipName['C'] = "Cruiser";
    shipName['d'] = "Destroyer";
    shipName['D'] = "Destroyer";
    shipName['f'] = "Frigate";
    shipName['F'] = "Frigate";
    return shipName[ch];
}

int main() {
    int t;
    char ch;
    cin >> t;
    while (t--){
        cin >> ch;
        cout << shipClass(ch) << endl;
    }
    return 0;
}