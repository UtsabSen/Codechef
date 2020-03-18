// Source: https://www.codechef.com/problems/HS08TEST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int withdraw;
    double balance;

    cin >> withdraw >> balance;

    if((withdraw + 0.5) > balance or withdraw%5 != 0){
        cout << fixed << setprecision(2) << balance;
    }else{
        cout << fixed << setprecision(2) << balance - withdraw - 0.5;
    }
    return 0;
}
