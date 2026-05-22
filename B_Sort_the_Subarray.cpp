#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        ll temp = 1;
        ll ans = 0;
        bool check = (a[0] != b[0]);

        ll temp_l = 0, temp_r = 0;
        ll ans_l = 0, ans_r = 0;

        for(ll i = 1; i < n; i++) {
            if (b[i-1] <= b[i]) {
                temp++;
                temp_r++;
                if (a[i] != b[i]) {
                    check = true;
                }
            } else {
                if (check && temp > ans) {
                    ans = temp;
                    ans_l = temp_l;
                    ans_r = temp_r;
                }
                // Reset for new segment
                temp = 1;
                check = (a[i] != b[i]);
                temp_l = i;
                temp_r = i;
            }
        }

        // Final update check
        if (check && temp > ans) {
            ans = temp;
            ans_l = temp_l;
            ans_r = temp_r;
        }

        // Output is 1-based index
        cout << ans_l + 1 << " " << ans_r + 1 << '\n';
    }

    return 0;
}
