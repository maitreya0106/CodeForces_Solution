#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int cnt = 0;
    bool inSegment = false;

    for (int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            if (!inSegment) {
                cnt++;
                inSegment = true;
            }
        } else {
            inSegment = false;
        }
    }

    cout << min(cnt, 2) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
