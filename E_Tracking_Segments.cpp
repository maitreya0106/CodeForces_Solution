#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll n, m, q;
vector<ll> a;
vector<pair<ll,ll>> seg;
vector<ll> qe;
bool check (ll x){

    vector<ll> a(n+1,0);
    for(ll i=0; i<x; i++){
        a[qe[i]]=1;
    }
    vector<ll> pref(n+1,0);
    for(ll i=1; i<=n; i++){
        pref[i]=pref[i-1]+a[i];
    }
    for(auto s: seg){
        ll l = s.first;
        ll r = s.second;
        ll wi = r-l+1;
        ll one = pref[r]-pref[l-1];
        if(one>wi/2) return true;
    }
    return false;

}


void solve() {

    cin >> n >> m;
    seg.resize(m);
    for(ll i=0; i<m; i++){
        cin >> seg[i].first;
        cin >> seg[i].second;
    }
    ll q;
    cin >> q;
    qe.resize(q);
    
    for(ll i=0 ;i<q; i++) cin >> qe[i];
    ll ans = -1;
    ll l = 1; 
    ll h = q;
    while(l<=h){
        ll m = (l+h)/2;
        if(check(m)){
            ans = m;
            h = m-1;
        }
        else l = m+1;
    }
    cout << ans << endl;
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