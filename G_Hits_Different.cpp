#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
   
    int t;
    std::cin >> t;
    

    vector<ll> dp(2500000, 0); 
    dp[1] = 1;
    
    ll prev_l = 0; // Tracks the start of row i-2
    ll l = 1;      // Tracks the start of row i-1
    ll r = 1;      // Tracks the end of row i-1
    
    for(ll i=2; i<=2023; i++){
        for(ll j=0; j<i; j++){ // FIXED: j++ instead of i++
            
            ll current = r + j + 1;
            ll val = current * current; // FIXED: square using multiplication
            
            if(j==0) {
                dp[current] = val + dp[l];
            }
            else if(j==i-1) {
                dp[current] = val + dp[r];
            }
            else {

                ll intersection = prev_l + j - 1;
                dp[current] = val + dp[l+j] + dp[l+j-1] - dp[intersection];
            }
        }
        

        prev_l = l;
        l = r + 1;
        r = r + i;
    }
    
    while(t--){
        ll n;
        cin >> n;
        cout << dp[n] << "\n"; // Using \n is faster than endl
    }
    
    return 0;
}