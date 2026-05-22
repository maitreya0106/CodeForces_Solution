#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    
    // Sort to use smallest hordes for combos, largest for ultimate attacks
    sort(a.begin(), a.end());
    
    ll l = 0;
    ll r = n-1;
    ll ans = 0;
    ll temp = 0; // Represents combo counter 'x'
    
    while(l < r){
        if(temp == a[r]){
            temp = 0;
            ans++;
            r--;
        }
        else { // temp < a[r]
            ll needed = a[r] - temp;
            if(a[l] > needed){
                a[l] -= needed; // FIX 1: Decrease a[l] by what we used
                ans += needed;
                temp = a[r];
            }
            else{
                temp += a[l];
                ans += a[l];
                l++;
            }
        }
    }
    
    // FIX 2: Handle the final remaining horde
    if(l == r){
        ll rem = a[r] - temp;
        if(rem <= 0){
            ans += 1; // Combo is already big enough for an ultimate
        }
        else {
            ll k = (rem + 1) / 2; // Ceiling division of rem / 2
            ans += k; // Add the Type-1 attacks
            
            if(a[r] - k > 0){
                ans += 1; // Add the final ultimate attack to finish them
            }
        }
    }
    
    cout << ans << "\n";
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