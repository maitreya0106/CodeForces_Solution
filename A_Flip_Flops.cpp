#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, c, k;
    cin >> n >> c >> k;
    ll ans = c;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    for(ll i=0; i<n; i++){
        if(a[i]<=ans){
            if(a[i]+k<=ans){
                ans+=a[i]+k;
                k=0;
            }
            else{
                k-=(ans-a[i]);
                ans*=2;
                
            }
        }
        else{
            break;
        }
    }
    cout << ans << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }



    
    return 0;
}