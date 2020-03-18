// Source: https://www.codechef.com/problems/TRICOIN

#include <bits/stdc++.h>
using namespace std;

int heightOfTriangle(int n){
    int s = 0;
    int i = 1;
    do{
        s += i;
        i++;
    }while (n > s);

    if(((i-1)*i)/2 > n){
        return i-2;
    } else if (((i-1)*i)/2 == n){
        return i-1;
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << heightOfTriangle(n) << endl;
    }
    return 0;
}