#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll n, k;
vector<ll> a;

bool check (ll x){

    for(ll i=0; i<n; i++){
        ll cost = 0;
        for(ll j=i, y=x; j<n; j++, y--){
            if(y<=a[j]) break;
            if(j==n-1) cost+=INT_MAX;
            else cost += y-a[j];
        }
        if(cost<=k) return true;
    }
    return false;

}


void solve() {

    cin >> n >> k;
    a.resize(n);
    for(ll i=0 ;i<n; i++) cin >> a[i];
    ll l = *max_element(a.begin(),a.end());
    ll h = l+n-1;
    ll ans = l;
    while(l<=h){
        ll m = l+(h-l)/2;
        if(check(m)){
            ans = m;
            l=m+1;
        }
        else{
            h = m-1;
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