#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m, q;
    cin >> n >> m >> q;
    
    ll t1, t2;
    cin >> t1 >> t2;
    
    ll c;
    cin >> c;


    if (t1 > t2) {
        swap(t1, t2);
    }


    if (c < t1) {
        cout << t1 - 1 << "\n";
    }

    else if (c > t2) {
        cout << n - t2 << "\n";
    }

    else {
        cout << (t2 - t1) / 2 << "\n";
    }
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}