#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(ll i=0; i<n;i++){
        ll x;
        cin >> x;
        a[i]={x,i+1};
    }
    sort(a.begin(),a.end());
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            if(a[i].first*a[j].first>2*n){
                break;
            }
            else{
                if(a[i].first*a[j].first==a[i].second+a[j].second) cnt++;
            }
        }
    }
    cout << cnt << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
