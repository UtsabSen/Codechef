// Source: https://www.codechef.com/problems/MNMX

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, temp;
    cin >> t;
    while (t--){
        int l;
        cin >> l;
        int minVal = INT_MAX;
        for (int i = 0; i < l; ++i) {
            cin >> temp;
            minVal > temp ? minVal = temp : minVal = minVal;
        }
        cout << minVal*(l-1) << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, temp;
    cin >> t;
    while (t--){
        int l;
        cin >> l;
        vector<int> v;
        for (int i = 0; i < l; ++i) {
            cin >> temp;
            v.push_back(temp);
        }
        int minVal = *min_element(v.begin(),v.end());
        cout << minVal*(l-1) << endl;
    }
    return 0;
}
 */

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, temp;
    cin >> t;
    while (t--){
        int l;
        cin >> l;
        int minval = INT_MAX;
        for (int i = 0; i < l; ++i) {
            cin >> temp;
            minval = min(minval,temp);
        }
        cout << minval*(l-1) << endl;
    }
    return 0;
}
 */

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int l, arr[l];
        cin >> l;
        for (int i = 0; i < l; ++i) {
            cin >> arr[i];
        }
        int minval = *min_element(arr+0,arr+l);
        cout << minval*(l-1) << endl;
    }
    return 0;
}
 */