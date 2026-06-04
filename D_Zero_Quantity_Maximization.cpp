#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


ll gcd(ll a, ll b){
    return b==0?a:gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> b[i];
    map<pair<ll,ll>,ll> mp;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(a[i]==0){
            if(b[i]==0) ans++;
            continue;
        }
        ll num = -b[i], dem = a[i];
        ll g = gcd(num,dem);
        num/=g;
        dem/=g;
        if(dem<0){  
            num = -num;
            dem = -dem;
        }
        mp[{num,dem}]++;
    }
    ll mx = 0;
    for(auto it: mp) mx = max(mx,it.second);
    ans+=mx;
    cout << ans << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

        solve();
    
    return 0;
}