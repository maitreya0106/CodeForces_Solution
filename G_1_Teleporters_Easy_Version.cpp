#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,c;
    cin >> n >> c;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        a[i]=x+i+1;
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(c-a[i]>=0){
            ans++;
            c-=a[i];
        }
        else break;
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