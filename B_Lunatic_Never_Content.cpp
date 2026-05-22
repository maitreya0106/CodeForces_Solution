#include <bits/stdc++.h>
#include <numeric>
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
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        ll ans = 0;
        for(ll i=0; i<n; i++){
            ans = gcd(ans,abs(a[i]-a[n-i-1]));
        }
        cout << ans << endl;
    }

    return 0;
}
