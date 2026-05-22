#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,n;
    cin >> a >> b >> n;
    ll tot = 0;
    tot += b;
    for(ll i=0; i < n; i++) {
        ll x;
        cin >> x;
        if(x>=a){
            tot += a-1;
        }
        else{
            tot += x;
        }
    }
    cout << tot << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}