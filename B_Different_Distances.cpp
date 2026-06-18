#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<ll> ans;
    for(ll j=0; j<2; j++){
    for(ll i=1; i<=n; i++){

            ans.push_back(i);

    }}
    for(ll i=2; i<=n; i++){
        ans.push_back(i);
    }
    ans.push_back(1);
    for(ll i=1; i<=n; i++){
        ans.push_back(i);
    }
    for(auto it: ans) cout << it << ' ';
    cout << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }



    
    return 0;
}