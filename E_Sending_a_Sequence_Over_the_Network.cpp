#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> b(n);
    for(ll i=0; i<n; i++) cin >> b[i];
    vector<bool> dp(n+1,0);
    dp[0]=true;
    for(ll i=1; i<=n; i++){
        if(dp[i-1]==true){
            if(i+b[i-1]<=n){
                dp[i+b[i-1]]= true;
            }
        }
        if(i-b[i-1]-1>=0){
            if(dp[i-b[i-1]-1]) dp[i]=true;
        }
    }
    if(dp[n]) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
