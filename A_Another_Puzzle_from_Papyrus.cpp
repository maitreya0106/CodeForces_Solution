#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n , c;
    cin >> n >> c;
    vector<ll> a(n),b(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> b[i];
    ll no = 0;
    for(ll i=0; i<n; i++){
        if(b[i]>a[i]){
            no = INT_MAX;
            break;
        }
        else no+=abs(b[i]-a[i]);
    }

    multiset<ll> st;
    for(auto it: a) st.insert(it);
    ll with = 0;
    for(ll i=0; i<n; i++){
        auto it = st.lower_bound(b[i]);
        if(it==st.end()){
            with = INT_MAX;
            break;
        }
        else{
            with += abs(b[i]-*it);
            st.erase(it);
        }
    }
    ll ans = min(no,with+c);
    if(ans == INT_MAX){
        cout << -1 << endl;
        return;
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