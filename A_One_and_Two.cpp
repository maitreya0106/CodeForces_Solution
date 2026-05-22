#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        int total2s = count(a.begin(), a.end(), 2);
        int left2s = 0;
        bool found = false;

        for(int k = 1; k < n; ++k) {
            if(a[k-1] == 2) left2s++;
            int right2s = total2s - left2s;
            if(left2s == right2s) {
                cout << k << '\n';
                found = true;
                break;
            }
        }

        if(!found) cout << -1 << '\n';
    }
    return 0;
}
