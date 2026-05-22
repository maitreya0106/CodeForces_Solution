#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    // Case 1: Multiply a
    if ((2 * b - c) % a == 0 && (2 * b - c) > 0) {
        cout << "YES\n";
        return;
    }

    // Case 2: Multiply b
    if ((a + c) % (2 * b) == 0 && (a + c) > 0) {
        cout << "YES\n";
        return;
    }

    // Case 3: Multiply c
    if ((2 * b - a) % c == 0 && (2 * b - a) > 0) {
        cout << "YES\n";
        return;
    }

    // If none work
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
