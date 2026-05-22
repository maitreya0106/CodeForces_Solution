#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++) cin >> a[i];
    vector<ll> dp(n+1,1);
    for(ll i=2; i<=n; i++){
        for(ll j=1; j*j<=i; j++){
            if(i%j!=0) continue;
            if(a[j]<a[i]){
                dp[i]=max(dp[i],1+dp[j]);
            }
            if(a[i/j]<a[i]){
                dp[i]=max(dp[i],1+dp[i/j]);
            }


        }
    }
    cout << *max_element(dp.begin(),dp.end()) << endl;
    
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