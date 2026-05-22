#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> pairs[1001];

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(1001,0);

    ll ans = -1;
    for(ll i=1; i<=n; i++){
        ll x;
        cin >> x;
        a[x]=i;
    }

    for(ll i=1; i<=1000; i++){
        if(a[i]==0) continue;
        for(ll j: pairs[i]){
            if(a[j]!=0){
                ans = max(ans,a[i]+a[j]);
            }
        }
    }
    cout << ans << endl;


}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    for(ll i=1; i<=1000; i++){
        for(ll j=1; j<=1000; j++){
            if(gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    while (t--) {
        solve();
    }
    return 0;
}