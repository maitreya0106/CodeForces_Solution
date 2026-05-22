#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    ll ans = ~0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x!=i) ans&=x;

    }
    cout << ans << endl;
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}