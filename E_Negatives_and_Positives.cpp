#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sign = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x<0) sign++;
        a[i]=x;
    }
    if(sign%2==0){
        ll ans = 0;
        for(ll i=0; i<n; i++) ans+=abs(a[i]);
        cout << ans << endl;
    }
    else{
        ll minv = INT_MAX;
        ll ans = 0;
        for(ll i=0; i<n; i++){
            ans+=abs(a[i]);
            minv = min(minv,abs(a[i]));
        }
        cout << ans-2*minv << endl;
    }
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