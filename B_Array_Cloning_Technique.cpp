#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    map<int, int> freq;
    int f = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        f = max(f, freq[x]);
    }

    if (f == n) {
        cout << 0 << '\n';
        return;
    }

    int ops = 0;
    int curr = f;

    while (curr < n) {
        ops++; // one clone
        int delta = min(n - curr, curr);
        ops += delta; // number of swaps
        curr += delta;
    }

    cout << ops << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
