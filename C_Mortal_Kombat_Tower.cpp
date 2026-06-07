#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    vector<vector<ll>>dp(n+1,vector<ll>(2,0));
    dp[n-1][0]=0;
    dp[n-1][1]=a[n-1];
    for(ll i=n-2; i>=0; i--){
        dp[i][0]=min(dp[i+1][1],dp[i+2][1]);
        dp[i][1]=min(dp[i+1][0]+a[i],dp[i+2][0]+a[i]+a[i+1]);
    }
    cout << dp[0][1] << endl;
    
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