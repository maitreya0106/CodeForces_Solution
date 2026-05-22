#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    ll f = 0;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            f=1;
            ll k = n/i;
            cout << k << " " << n-k << endl;
            break;
        }
    }
    if(f==0){
        cout << 1 << " " << n-1 << endl;
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}