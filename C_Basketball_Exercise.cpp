#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>>dp(n,vector<ll>(2,0));
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> b[i];

    for(ll i=0; i<n; i++){
 
        if(i==0){
            dp[0][0]=a[0];
            dp[0][1]=b[0];
        }
        else if(i==1){
            dp[i][0]=a[i]+dp[i-1][1];
            dp[i][1]=b[i]+dp[i-1][0];
        }
        else{
            dp[i][0]=a[i]+max(dp[i-1][1],dp[i-2][1]);
            dp[i][1]=b[i]+max(dp[i-1][0],dp[i-2][0]);
        }
        
    }
    cout << max(dp[n-1][0],dp[n-1][1]) << endl;
    
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
        solve();
    
    return 0;
}