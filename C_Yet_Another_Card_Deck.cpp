#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}



void solve() {
    ll n,q;
    cin >> n >> q;
    vector<ll> fir_pos(51,n+1);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(fir_pos[x]==n+1){
            fir_pos[x]=i;
        }
    }
    for(ll i=0; i<q; i++){
        ll x;
        cin >> x;
        ll ans = fir_pos[x];
        cout << ans+1 << " ";
        for(ll j=1; j<=50; j++){
            if(fir_pos[j]<ans){
                fir_pos[j]++;
            }
        }
        
        fir_pos[x] = 0;
    }
    

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}