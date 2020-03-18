// Source: https://www.codechef.com/problems/FLOW011

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, salary = 0;
    cin >> t;
    while (t--){
        cin >> salary;
        if(salary < 1500){
            cout << fixed << setprecision(2) << 2.0 * salary << endl;
        }else{
            float hra = 500, da = salary * 0.98;
            cout << fixed << setprecision(2) << salary + hra + da << endl;
        }
    }
    return 0;
}