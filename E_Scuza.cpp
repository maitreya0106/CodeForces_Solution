#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n,q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> sum(n);
    ll temp = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        temp+=x;
        sum[i]=temp;
        a[i]=x;
    }
    vector<ll> max_climb(n);
    max_climb[0]=a[0];
    for(ll i=1; i<n; i++){
        max_climb[i]=max(a[i],max_climb[i-1]);
    }
    for (ll i = 0; i < q; i++) {
        ll x;
        cin >> x;

        auto it = upper_bound(max_climb.begin(), max_climb.end(), x); 
        if (it == max_climb.begin()) {
            cout << 0 << " "; // No climb possible
        } else {
            ll idx = (it - max_climb.begin()) - 1;
            cout << sum[idx] << " ";
        }
    }
    cout << "\n";
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
