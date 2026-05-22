#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}





void solve() {
    ll n,m;
    cin >> n >> m;
    ll minv = INT_MAX;
    ll cnt = 0;
    ll sum = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll x;
            cin >> x;
            if(x<0){
                cnt++;
            }
            x=abs(x);
            minv = min(minv, x);
            sum += x;
            
        }
    }
    if(cnt%2==0){
        cout << sum << "\n";
    }
    else{
        cout << abs(sum - 2*minv) << "\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
