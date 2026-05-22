#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> pair_pos;

    for(ll i=0; i<n; i++){
        ll k;
        cin >> k;
        vector<ll> mon(k);
        for(ll j=0; j<k; j++){
            ll x;
            cin >> x;
            mon[j]=x-j+1;
        }

        sort(mon.begin(),mon.end());
        pair_pos.push_back({mon[k-1],k});
    }
    sort(pair_pos.begin(),pair_pos.end());
    ll ans = pair_pos[0].first;
    ll inc = pair_pos[0].second;
    for(ll i=1; i<n; i++){
        ans = max(ans, pair_pos[i].first-inc);
        inc += pair_pos[i].second;
    }
    cout << ans << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}