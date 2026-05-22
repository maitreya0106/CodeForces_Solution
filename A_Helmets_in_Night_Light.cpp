\
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}








void solve() {
    ll n,p;
    cin >> n >> p;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<pair<ll,ll>> v;
    for(ll i=0; i<n; i++){
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());
    ll ans = p;
    ll shared = 1;
    for(auto it:v){
        ll can_be_shared = it.second;
        ll sharing_cost = it.first;
        if(sharing_cost>=p) {
            break;
        }
        if(shared+can_be_shared>n) {
            ans+=(n-shared)*sharing_cost;
            shared = n;
            break;
        }
        else{
            ans += can_be_shared * sharing_cost;
            shared += can_be_shared;
        }
    }
    ans +=  (n-shared) * p;
    cout << ans << "\n";


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
