#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while(r<n){
        if(l==r){
            r++;
            continue;
        }
        if(a[r]*2<=a[r-1]){
            l = r;
            continue;
        }
        else{
            if(r-l<k){
                r++;
            }
            else if(r-l==k){
                ans++;
                r++;
                l++;
            }
        }
    }
    cout << ans << '\n';
    
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