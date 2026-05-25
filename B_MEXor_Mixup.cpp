#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll computeXOR(ll n) {
    if (n < 0) return 0;
    ll mod = n % 4;
    if (mod == 0) return n;
    if (mod == 1) return 1;
    if (mod == 2) return n + 1;
    return 0; // mod == 3
}

void solve(){
    ll a, b;
    cin >> a >> b;
    ll ans = a;
    ll xr = computeXOR(a-1);

    xr = b^xr;
    if(xr==0){
        cout << ans << endl;
        return;
    }
    if(xr==a){
        cout << ans+2 << endl;
        return;
    }
    else{
        cout << ans +1 << endl;
        return;
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}