#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll>a(n);
    multiset<ll> b;
    a[0]=1;
    for(ll i=1; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        b.insert(x);
    }
    sort(a.begin(),a.end());

    ll ans = 0;
    for(ll i=0; i<n; i++){
        auto it = b.upper_bound(a[i]);
        if(it==b.end()) break;

        b.erase(it);
        ans++;
    }
    cout << n-ans << endl;
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}