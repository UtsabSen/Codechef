// Source: https://www.codechef.com/problems/CCOOK

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, temp;
    cin >> t;
    while (t--){
        int c = 0;
        for (int i = 0; i < 5; ++i) {
            cin >> temp;
            if(temp == 1){
                c++;
            }
        }
        if(c == 0){
            cout << "Beginner" << endl;
        } else if (c == 1){
            cout << "Junior Developer" << endl;
        } else if (c == 2){
            cout << "Middle Developer" << endl;
        } else if (c == 3){
            cout << "Senior Developer" << endl;
        } else if (c == 4){
            cout << "Hacker" << endl;
        } else if (c == 5){
            cout << "Jeff Dean" << endl;
        }
    }
}