#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    bool all1 = true;
    for(auto it: a) if(it!=1){
        all1 = false;
        break;
    }
    if(all1){
        cout << 1 << endl;
        return;
    }
    ll ans = 0;
    if(a[n-1]==1) ans++;
    unordered_map<int,int> mp;
    for(auto it: a) if(it!=1) ans+=it;

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