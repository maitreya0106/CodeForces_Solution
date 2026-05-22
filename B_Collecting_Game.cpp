#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n); // {value, original_index}
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a[i] = {x, i};
        }

        sort(a.begin(), a.end()); // sort by value

        vector<ll> prefix(n);
        prefix[0] = a[0].first;
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + a[i].first;
        }

        vector<ll> rightmost(n);
        rightmost[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (prefix[i] >= a[i + 1].first) {
                rightmost[i] = rightmost[i + 1];
            } else {
                rightmost[i] = i;
            }
        }

        vector<ll> ans(n);
        for (int i = 0; i < n; i++) {
            ll original_idx = a[i].second;
            ans[original_idx] = rightmost[i];
        }

        for (ll i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
