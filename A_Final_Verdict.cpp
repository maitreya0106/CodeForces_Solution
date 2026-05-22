#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        long long sum = 0;
        bool allSame = true;

        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            if(a[i] != x) allSame = false;
        }

        if(sum == 1LL * x * n) {
            cout << "YES\n";
        } else if(!allSame) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
