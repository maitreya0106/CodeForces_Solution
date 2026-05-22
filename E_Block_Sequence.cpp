#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    
    vector<ll> dp(n+1, 0);
    for(ll i=n-1; i>=0; i++){
        ll n2 = 1 + dp[i+1]; 
        ll n1 = 1e9;
        
        if(i+a[i]+1 <= n){

            n1 = dp[i+a[i]+1]; 
        }
        
        dp[i] = min(n2, n1);
    }
    cout << dp[0] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}