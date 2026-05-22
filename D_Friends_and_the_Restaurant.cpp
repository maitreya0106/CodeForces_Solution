#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>>a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i].first;
    }
    for(ll i=0; i<n; i++){
        cin >> a[i].second;
    }
    sort(a.begin(),a.end(),[&](pair<ll,ll>x,pair<ll,ll>y){
        return (x.second-x.first)>(y.second-y.first);
    });
    ll l = 0;
    ll r = n-1;
    ll ans = 0;
    while(l<r){
        if((a[l].second+a[r].second)>=(a[l].first+a[r].first)){
            ans++;
            l++;
            r--;
        }
        else r--;
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}