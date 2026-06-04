#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;




void solve(){

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);

    for(ll i=0; i<n; i++) cin >> a[i];
    vector<ll> cnt(n+1,0);
    for(ll i=0; i<k; i++){
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        cnt[l]++;
        cnt[r+1]--;
    }
    for(ll i=1; i<=n; i++){
        cnt[i]+=cnt[i-1];
    }
    sort(cnt.rbegin(),cnt.rend());
    sort(a.rbegin(),a.rend());
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans += a[i]*cnt[i];
    }
    cout << ans << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}