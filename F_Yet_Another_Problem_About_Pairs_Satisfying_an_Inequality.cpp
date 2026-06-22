#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> inc;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        
        if(a[i]<i+1){
            auto it = lower_bound(inc.begin(),inc.end(),a[i]);
            ll dis = it-inc.begin();
            ans+=dis;
            inc.push_back(i+1);
        }
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