#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll pos = 0, neg = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x>0) pos++;
        else neg++;
    }
    if(neg>pos) swap(pos,neg);
    pos -= neg;
    if(pos%4==0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

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
