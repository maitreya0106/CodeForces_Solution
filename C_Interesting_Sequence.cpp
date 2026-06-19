#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    for(ll i=0; i<=60; i++){
        ll n1 = n&i;
        ll x1 = n&i;
        if(n1==x1) continue;
        if (x1==1&&n1==0){
            cout << -1 << endl;
            return;
        }
        else{
            ans+=1<<i;
        }
    }
    cout << ans << endl;

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