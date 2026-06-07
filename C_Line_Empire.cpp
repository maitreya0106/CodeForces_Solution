#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;



void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> vec(n+1);
    vec[0]=0;
    for(ll i=1; i<=n; i++) cin >> vec[i];
    vector<ll> suf(n+2,0);
    suf[n]=vec[n];
    for(ll i=n-1; i>=1; i--){
        suf[i]=suf[i+1]+vec[i];
    }
    ll ans = LLONG_MAX;
    for(ll i=0; i<=n; i++){
        ll num = (a+b)*vec[i]+(suf[i+1]-(n-i)*vec[i])*b;
        ans = min(ans,num);
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