#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<string> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;

    for (ll i = 0; i < (n+1)/2; i++) {
        for (ll j = 0; j < n/2; j++) {
            ll ones = 0, zeros = 0;

            // 4 rotationally symmetric positions
            if (a[i][j] == '1') ones++; else zeros++;
            if (a[j][n - i - 1] == '1') ones++; else zeros++;
            if (a[n - i - 1][n - j - 1] == '1') ones++; else zeros++;
            if (a[n - j - 1][i] == '1') ones++; else zeros++;

            ans += min(ones, zeros);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
