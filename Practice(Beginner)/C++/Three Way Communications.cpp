// Source: https://www.codechef.com/problems/COMM3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, ax = 0, ay = 0,  bx = 0, by = 0, cx = 0, cy = 0, range = 0;
    cin >> t;
    while(t--){
        cin >> range;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        double dis_ab = pow((pow(abs(ax-bx),2)+pow(abs(ay-by),2)),0.5);
        double dis_bc = pow((pow(abs(bx-cx),2)+pow(abs(by-cy),2)),0.5);
        double dis_ca = pow((pow(abs(cx-ax),2)+pow(abs(cy-ay),2)),0.5);
        if((dis_ab <= range and dis_bc <= range) or (dis_bc <= range and dis_ca <= range) or (dis_ca <= range and dis_ab <= range)){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }

    }

    return 0;
}