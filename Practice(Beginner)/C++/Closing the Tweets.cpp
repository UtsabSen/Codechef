// Source: https://www.codechef.com/problems/TWTCLOSE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tweet = 1, n, idx;
    cin >> tweet >> n;
    int arr[tweet] = {0};
    while (n--){
        string s;
        cin >> s;
        if(s == "CLICK"){
             cin >> idx;
             arr[idx-1] ? arr[idx-1] = 0 : arr[idx-1] = 1;
        }else{
            for (int i = 0; i < tweet; ++i) {
                arr[i] = 0;
            }
        }
        cout << count(arr,arr+tweet,1) << endl;
    }


    return 0;
}