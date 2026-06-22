#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> bits(31,0);
    for(ll i=0; i<n; i++){
        for(ll si = 0; si<=30; si++){
            if(a[i]&(1<<si)){
                bits[si]++;
            }
        }
    }
    ll ans = 0;
    for(ll i=30; i>=0; i--){
        ll rem = (n-bits[i]);
        if(rem>k) continue;
        k-=rem;
        ans+=(1<<i);
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