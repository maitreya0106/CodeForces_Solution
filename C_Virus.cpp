#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for(ll i=0; i<m; i++) cin >> a[i];
    sort(a.begin(),a.end());
    vector<ll> gaps;
    for(ll i=1; i<m; i++){
        gaps.push_back(a[i]-a[i-1]-1);
    }
    gaps.push_back(n-a[m-1]+a[0]-1);
    sort(gaps.rbegin(),gaps.rend());
    ll days = 0;
    ll ans = 0;
    for(auto gap: gaps){
        ll curgap = gap-2*days;
        if(curgap>0){
            ans++;
            curgap-=2;
            if(curgap>0) ans+=curgap;
            days+=2;
        }
    }
    cout << (n-ans) << endl;
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
